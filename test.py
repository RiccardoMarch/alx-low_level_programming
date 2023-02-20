i = 0
j = 0

size = 10

for i in range(size * size):
    a = (int)(i / size)
    b = (i % size)

    if a < b:
        print("{0}{1} {2}{3}".format((int)(a / 10), (a % 10), (int)(b / 10), (b % 10)))

    