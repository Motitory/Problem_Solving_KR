def precedence(ch):
	if ch in '()':
		return 0
	elif ch in '+-':
		return 1
	else:
		return 2
	
str = input()
stack = []
ans = ''

for ch in str:
	if ch.isalpha():
		ans += ch
	elif ch == '(':
		stack.append(ch)
	elif ch == ')':
		while stack[-1] != '(':
			ans += stack.pop()
		stack.pop()
	else:
		while stack and precedence(stack[-1]) >= precedence(ch):
			ans += stack.pop()
		stack.append(ch)

while stack:
	ans += stack.pop()

print(ans)
