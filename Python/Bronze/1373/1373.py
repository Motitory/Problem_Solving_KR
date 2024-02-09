str = input()
n = len(str)

if n % 3 == 1:
	print(str[0], end='')
elif n % 3 == 2:
	print((ord(str[0]) - ord('0')) * 2 + (ord(str[1]) - ord('0')), end='')

for i in range(n % 3, n, 3):
	print((ord(str[i]) - ord('0')) * 4 + (ord(str[i + 1]) - ord('0')) * 2 + (ord(str[i + 2]) - ord('0')), end='')
