k, l = map(int, input().split())

for i in range(2, l):
    if k % i == 0:
        print(f"BAD {i}")
        break
else:
    print("GOOD")
