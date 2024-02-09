eight = ['000', '001', '010', '011', '100', '101', '110', '111']

str = input()
# 문자열 연산보단, 리스트에 append한 뒤에 join하는 것이 더 빠르다.
ans = []

if str == '0':
	ans.append('0')
else:
	first = True
	for ch in str:
		n = ord(ch) - ord('0')
		if first and n < 4:
			if n == 0:
				continue
			elif n == 1:
				ans.append('1')
			elif n == 2:
				ans.append('10')
			else:
				ans.append('11')
			first = False
		else:
			ans.append(eight[n])
			first = False

print(''.join(ans))
