from collections import deque

n, k = map(int, input().split())

q = deque([i for i in range(1, n + 1)])
ans = []

for i in range(n - 1):
	for j in range(k - 1):
		q.append(q.popleft())
	ans.append(q.popleft())

ans.append(q[0])
print('<' + ', '.join(map(str, ans)) + '>')