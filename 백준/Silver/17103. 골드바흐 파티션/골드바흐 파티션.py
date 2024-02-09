sieve = [False] * 1_000_001
primes = []

for i in range(2, 1_000_001):
	if sieve[i] == False:
		primes.append(i)
		for j in range(i * 2, 1_000_001, i):
			sieve[j] = True

t = int(input())

for _ in range(t):
	n = int(input())
	ans = 0
	for p in primes:
		if p > n // 2:
			break
		if sieve[n - p] == False:
			ans += 1
	print(ans)
