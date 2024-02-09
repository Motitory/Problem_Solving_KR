def gcd(a, b):
	while b:
		a, b = b, a % b
	return a

t = int(input())

for _ in range(t):
	n, *arr = map(int, input().split())
	ans = 0
	for i in range(n - 1):
		for j in range(i + 1, n):
			ans += gcd(arr[i], arr[j])
	print(ans)
