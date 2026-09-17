def print_matrix():
    # Read rows and columns
    dimensions = input().strip().split()
    if not dimensions:
        return
    rows = int(dimensions[0])
    cols = int(dimensions[1])

    # Read the matrix elements row by row
    matrix = []
    for _ in range(rows):
        row = list(map(int, input().strip().split()))
        matrix.append(row)

    # Print the matrix
    for row in matrix:
        print(" ".join(map(str, row)))


if __name__ == "__main__":
    print_matrix()