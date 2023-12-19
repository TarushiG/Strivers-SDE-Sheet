def searchMatrix(matrix, target):
    n = len(matrix)
    m = len(matrix[0])
    low = 0
    high = n * m - 1
    while low <= high:
        mid = (low + high) // 2
        row = mid // m
        col = mid % m
        if matrix[row][col] == target:
            return True
        elif matrix[row][col] < target:
            low = mid + 1
        else:
            high = mid - 1
    return False

n = int(input("Enter the number of rows: "))
m = int(input("Enter the number of columns: "))

print("Enter the matrix elements:")
matrix = []
for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)
target = int(input("Enter the target value: "))
result = searchMatrix(matrix, target)
print("true" if result else "false")
