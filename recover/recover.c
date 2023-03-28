#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{

    // Check that the user is providing at least one argument (2)
    if (argc != 2)
    {
        printf("Usage: ./recover Image\n");
        return 1;
    }

    // Open file to read
    FILE *input_file = fopen(argv[1], "r");

    // Ensure the input_file works
    if (input_file == NULL)
    {
        printf("Could not open the file");
        return 2;
    }

    // Store 512 byte blocks into array
    unsigned char buffer[512];

    // Track number of created images
    int count_image = 0;

    // Introduce file pointer for imgs
    FILE *output_file = NULL;

    // Introduce file name / memory allocate
    char *filename = malloc(8 * sizeof(char));

    // Read blocks
    while (fread(buffer, sizeof(char), 512, input_file))
    {
        // Check if bytes encountered show the start of expected img
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // Close previous img when discovering new img
            if (count_image > 0)
            {
                fclose(output_file);
            }

            // Write img file names
            sprintf(filename, "%03i.jpg", count_image);

            // Open the output_file to write img
            output_file = fopen(filename, "w");

            // Count total value of imgs located
            count_image++;
        }
        // Verify if output was used for a valid input
        if (output_file != NULL)
        {
            fwrite(buffer, sizeof(char), 512, output_file);
        }
    }
    free(filename);
    fclose(output_file);
    fclose(input_file);

    return 0;
}