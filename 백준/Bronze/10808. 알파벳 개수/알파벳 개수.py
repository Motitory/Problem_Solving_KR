str = input()

for i in range(26):
	ch = chr(i + ord('a'))
	print(str.count(ch), end=' ' if i != 25 else '\n')
