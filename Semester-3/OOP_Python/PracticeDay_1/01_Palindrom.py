n = input().strip()

reversed_str = ""
length = len(n)

for i in range(length - 1, -1, -1):
    reversed_str = reversed_str + n[i]

print(int(reversed_str))

if n == reversed_str:
    print("YES")
else:
    print("NO")

