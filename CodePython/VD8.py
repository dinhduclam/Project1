def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

n = int(input("Nhập số nguyên dương n: "))
print("Fibonacci thứ", n, "là", fibonacci(n))