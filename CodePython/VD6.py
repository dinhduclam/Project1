def gcd(a, b):
    if a == 0 | b == 0:
        return a + b

    while a != b:
        if a > b:
            a -= b
        else:
            b -= a
    return a

if __name__ == '__main__':
    print('Nhap 2 so a va b')
    a = int(input("a = "))
    b = int(input("b = "))
    print('Uoc chung lon nhat cua 2 so a va b la', gcd(a, b))