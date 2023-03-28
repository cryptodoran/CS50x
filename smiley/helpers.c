#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    for (int x = 0; x < height; x++)
    {
        for (int y = 0; y < width; y++)
        {
            if (image[x][y].rgbtRed == 0x00 && image[x][y].rgbtGreen == 0x00 && image[x][y].rgbtBlue == 0x00)
            {
                // Changing the pixels of the image to a cyan color
                image[x][y].rgbtRed = 0x87;
                image[x][y].rgbtGreen = 0xce;
                image[x][y].rgbtBlue = 0xeb;
                // Remember to use '=' and a new line with ';' for each color code here
            }
        }
    }
}