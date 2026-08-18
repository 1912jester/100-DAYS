def print_numbers(n):
    result = " ".join(str(i) for i in range(1, n + 1))
    print(result)


# Example test case execution
if __name__ == "__main__":
    test_inputs = [5, 3]
    for n in test_inputs:
        print(f"Input: {n}")
        print("Output:", end=" ")
        print_numbers(n)
        print()