import sys
input = sys.stdin.readline

MAX = 1000000
check = [0] * (MAX + 1)
check[0] = check[1] = True

prime = []
for i in range(2, MAX + 1):
	if not check[i]:
		prime.append(i)
		for j in range(i * i, MAX + 1, i):
			check[j] = True

prime = prime[1:]

while True:
	n = int(input())
	if n == 0:
		break
	for p in prime:
		if p > n // 2:
			break
		if not check[n - p]:
			print(f"{n} = {p} + {n - p}")
			break
	else:
		print("Goldbach's conjecture is wrong.")
