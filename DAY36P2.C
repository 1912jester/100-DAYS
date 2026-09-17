def matrix_sum():
    # Read rows and columns
    dimensions = input().strip().split()
    if not dimensions:
        return
    rows = int(dimensions[0])

    total_sum = 0
    for _ in range(rows):
        row = list(map(int, input().strip().split()))
        total_sum += sum(row)

    print(total_sum)


if __name__ == "__main__":
    matrix_sum()