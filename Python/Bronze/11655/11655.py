import sys

def rot13(s):
	ans = ''
	for ch in s:
		if ch.isalpha():
			if ch.islower():
				ans += chr((ord(ch) - ord('a') + 13) % 26 + ord('a'))
			else:
				ans += chr((ord(ch) - ord('A') + 13) % 26 + ord('A'))
		else:
			ans += ch

	return ans

print(rot13(sys.stdin.readline().rstrip()))
