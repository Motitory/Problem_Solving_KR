def gcd(a, b):
	while b:
		a, b = b, a % b
	return a

n, s = map(int, input().split())
arr = list(map(int, input().split()))
arr = [abs(s - i) for i in arr]
ans = arr[0]

for i in range(1, n):
	ans = gcd(ans, arr[i])

print(ans)
