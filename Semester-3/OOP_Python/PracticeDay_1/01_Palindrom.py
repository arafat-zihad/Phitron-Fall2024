n = int(input())
l = len(str(n))
rev = 0
x = range(0, l)
for i in x:
    temp = n % 10
    rev = rev + temp * 10

print(rev)