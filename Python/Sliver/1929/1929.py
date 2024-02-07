MAX = 1_000_000
check = [0] * (MAX + 1)
check[0] = check[1] = True

for i in range(2, MAX + 1):
	if not check[i]:
		for j in range(i * i, MAX + 1, i):
			check[j] = True

m, n = map(int, input().split())

for i in range(m, n + 1):
	if not check[i]:
		print(i)
