def is_perfect_square(num): # Function to check if a number is a perfect square
    if num < 0:
        return False
    # Calculate the square root and check if it's an integer
    sqrt = int(math.sqrt(num))
    return sqrt * sqrt == num

# Main program
if __name__ == "__main__":
    # Accept a positive integer input from the user
    number = int(input("Enter a positive integer: "))
    
    if number < 0:
        print("Please enter a positive integer.")
    else:
        # Check if it's a perfect square
        if is_perfect_square(number):
            print(f"{number} is a perfect square.")
        else:
            print(f"{number} is not a perfect square.")
