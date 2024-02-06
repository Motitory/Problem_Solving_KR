import sys
lines = sys.stdin.readlines()

for str in lines:
	lower = 0
	upper = 0
	num = 0
	space = 0
	for ch in str:
		if ch.islower():
			lower += 1
		elif ch.isupper():
			upper += 1
		elif ch.isdigit():
			num += 1
		elif ch == ' ':
			space += 1

	print(f'{lower} {upper} {num} {space}')
