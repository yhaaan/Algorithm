a, b = map(int, input().split())

if a>b:
    t = a
    a = b
    b = t
if a == b:
    print(0)    
else:
    print(b - a -1)
for i in range(a+1, b):
    print(i, end=" ")
