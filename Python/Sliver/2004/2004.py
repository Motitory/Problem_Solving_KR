def calc(n, v):
	ans = 0
	i = v
	while i <= n:
		ans += n // i
		i *= v
	return ans

two_cnt = 0
five_cnt = 0
n, m = map(int, input().split())

# nCm = n! / (n-m)!m!
two_cnt += calc(n, 2) - calc(m, 2) - calc(n - m, 2)
five_cnt += calc(n, 5) - calc(m, 5) - calc(n - m, 5)

print(min(two_cnt, five_cnt))
