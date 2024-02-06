str = input()
n = len(str)
a = [str[i:] for i in range(n)]
a.sort()
print('\n'.join(a))
