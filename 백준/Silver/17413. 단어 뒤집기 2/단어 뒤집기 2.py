import sys
input = sys.stdin.readline

def reversed_words(input_str):
	stack = []
	in_tag = False

	for ch in input_str:
		if ch == '<':
			print(''.join(stack[::-1]), end='')
			stack.clear()
			print(ch, end='')
			in_tag = True
		elif ch == '>':
			print(ch, end='')
			in_tag = False
		elif in_tag:
			print(ch, end='')
		elif ch == ' ' or ch == '\n':
			print(''.join(stack[::-1]), end='')
			stack.clear()
			print(ch, end='')
		else:
			stack.append(ch)

	print(''.join(stack[::-1]))


s = input()
reversed_words(s)
