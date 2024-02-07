n = int(input())
postfix = input()
operand = [int(input()) for _ in range(n)]

stack = []
A = ord('A')
Z = ord('Z')

for ch in postfix:
	if A <= ord(ch) <= Z:
		stack.append(operand[ord(ch) - A])
	else:
		b = stack.pop()
		a = stack.pop()
		if ch == '+':
			stack.append(a + b)
		elif ch == '-':
			stack.append(a - b)
		elif ch == '*':
			stack.append(a * b)
		elif ch == '/':
			stack.append(a / b)

print(f'{stack[0]:.2f}')
