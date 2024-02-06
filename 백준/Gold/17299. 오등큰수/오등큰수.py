n = int(input())
a = list(map(int, input().split()))

freq = [0] * 1000001
ans = [0] * n
stack = [0]

for i in range(n):
	freq[a[i]] += 1

for i in range(1, n):
	if not stack:
		stack.append(i)
	while stack and freq[a[stack[-1]]] < freq[a[i]]:
		ans[stack.pop()] = a[i]
	stack.append(i)

while stack:
	ans[stack.pop()] = -1

print(*ans)
