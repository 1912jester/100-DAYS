def count_characters():
    # Read the string (handle potential spaces or empty lines properly)
    try:
        s = input()
    except EOFError:
        s = ""

    # Count characters manually without using len()
    count = 0
    for _ in s:
        count += 1

    print(count)


if __name__ == "__main__":
    count_characters()