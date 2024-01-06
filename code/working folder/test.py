import random

n = random.randint(1000, 10000)
a = random.randint(100, 5000)
r = random.randint(100, 5000)
m = random.randint(2000, 10000)
test = [n, a, r, m]
print(f'{n} {a} {r} {m}')
random_array = [random.randint(0, 10000000) for i in range(n)]
for i in random_array:
    print(i, end=" ")