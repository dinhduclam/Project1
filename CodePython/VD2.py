
n = int(input('n='))
k = int(input('k='))
used = [False]*n
a = [0]*k
count = 0

def show():
    global count
    for element in a:
        print(chr(element+ord('a')), end=' ')
    print()
    count += 1

def backtrack(pos):
    global used, a, n, k
    if pos == k:
        show()
        return

    for i in range(n):
        if used[i] == False:
            a[pos] = i
            used[i] = True
            backtrack(pos + 1)
            used[i] = False


backtrack(0)
print(f'Co {count} to hop')