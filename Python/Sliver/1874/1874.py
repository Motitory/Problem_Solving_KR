n = int(input())
num = [int(input()) for _ in range(n)]

stack = []
m = 0
ans = ''

for x in num:
	if x > m:
		while x > m:
			m += 1
			stack.append(m)
			ans += ('+')
		stack.pop()
		ans += ('-')
	else:
		if stack[-1] != x:
			print('NO')
			exit(0)
		stack.pop()
		ans += ('-')

print('\n'.join(ans))
