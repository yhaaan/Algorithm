t= int(input())

for i in range(t):
    input()
    n = int(input())
    sum = 0;
    for j in range(n):
        num = int(input())
        sum += num
    if(sum%n == 0):
        print("YES")
    else:
        print("NO")
    
    