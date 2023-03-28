# 3 x 3 row of bricks

for i in range(3):
    for j in range(3):
        print("#", end="")
    print()

# Easiest way to print 4 question marks in a row
print ("?" * 4)

# Changes default end of line from \n to nothing so the question marks are on same row
for i in range(4):
    print("?", end="")
print()


# Using main function and other variables from below to print column of bricks

from cs50 import get_int

def main():
    height = get_height()
    for i in range(height):
        print("#")


def get_height():
    while True:
        try:
            n = int(input("Height: "))
            if n > 0:
                return n
            except ValueError:
                print("Not an integer")

main()


# Using variable and a while loop to take user input for column of bricks

from cs50 import get_int

while True:
    n = get_int("Height: ")
    if n > 0:
        break

for i in range(n):
    print("#")

# Vertical column of bricks

for i in range(3):
    print("#")