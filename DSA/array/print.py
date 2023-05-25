s = 'abcdefg'
n = len(s)

for i in range(1, n):
    for j in range(n-i):
        print(s[i],s[j+i],end='')
    print()
        