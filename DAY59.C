arr = list(map(int, input().split())) k = int(input())

windowsum = sum(arr[:k]) maxsum = window_sum

for i in range(k, len(arr)): windowsum += arr[i] - arr[i - k] maxsum = max(maxsum, windowsum)

print(max_sum)