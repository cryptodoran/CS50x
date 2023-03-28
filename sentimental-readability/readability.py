count_letter = 0
count_word = 1
count_sentence = 0

# First, we must collect input from the user
text = input("Text: ")
text_length = len(text)

# The next portion counts the # of letters in the text
for i in range(text_length):
    if (text[i].isalpha()):
        count_letter += 1

# Next, we'll count the number of words in the text
    if (text[i].isspace()):
        count_word += 1

# Then, we'll count the number of sentences in the like
    if (text[i] == '.' or text[i] == '?' or text[i] == '!'):
        count_sentence += 1

calculation = (0.0588 * count_letter / count_word * 100) - (0.296 * count_sentence / count_word * 100) - 15.8

index = round(calculation)

if index < 1:
    print("Before Grade 1")
elif index > 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")