def fac_iterative(i):
    result = 1
    for num in range(1, i + 1):
        result *= num
    return result

n = int(input())
print(fac_iterative(n))
