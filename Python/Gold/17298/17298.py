n = int(input())
a = list(map(int, input().split()))

ans = [-1] * n
stack = [0]

for i in range(1, n):
	if not stack:
		stack.append(i)
	while stack and a[stack[-1]] < a[i]:
		ans[stack.pop()] = a[i]
	stack.append(i)

print(*ans)