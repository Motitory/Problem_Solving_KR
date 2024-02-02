import sys
input = sys.stdin.readline
left = list(input().strip())
right = []

m = int(input())

for _ in range(m):
	line = input().strip().split()
	cmd = line[0]
	if cmd == 'L':
		if left:
			right.append(left.pop())
	elif cmd == 'D':
		if right:
			left.append(right.pop())
	elif cmd == 'B':
		if left:
			left.pop()
	elif cmd == 'P':
		left.append(line[1])

left += right[::-1]
print(''.join(left))
