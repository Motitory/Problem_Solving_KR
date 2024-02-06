import sys
input = sys.stdin.readline

s = input().strip()
stack = []
ans = 0

for i in range(len(s)):
	if s[i] == '(':
		stack.append(i)
	else:
		if stack[-1] + 1 == i:
			stack.pop()
			ans += len(stack)
		else:
			stack.pop()
			ans += 1

print(ans)