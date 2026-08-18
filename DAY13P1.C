def calculator():
    # Reading input (assuming inputs are provided as space-separated values: num1 num2 operator)
    user_input = input().strip().split()
    if len(user_input) != 3:
        print("Invalid input format")
        return

    num1 = float(user_input[0])
    num2 = float(user_input[1])
    operator = user_input[2]

    # Python doesn't have a direct switch-case, but match-case (Python 3.10+) 
    # or a dictionary lookup mimics switch-case behavior cleanly.
    match operator:
        case '+':
            result = num1 + num2
        case '-':
            result = num1 - num2
        case '*':
            result = num1 * num2
        case '/':
            if num2 == 0:
                print("Error: Division by zero")
                return
            result = num1 / num2
        case '%':
            if num2 == 0:
                print("Error: Division by zero")
                return
            result = num1 % num2
        case _:
            print("Invalid operator")
            return

    # Print as an integer if it's a whole number for clean output matching test cases
    if result.is_integer():
        print(int(result))
    else:
        print(result)


if __name__ == "__main__":
    calculator()