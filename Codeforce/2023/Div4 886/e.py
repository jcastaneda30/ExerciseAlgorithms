def used_cardboard(w, sizes):
    return sum((s + 2 * w) ** 2 - s ** 2 for s in sizes)

def find_w(n, c, sizes):
    left = 1
    right = sum(sizes) + c

    while left < right:
        mid = (left + right) // 2
        used = used_cardboard(mid, sizes)

        if used == c:
            return mid
        elif used < c:
            left = mid + 1
        else:
            right = mid

    return left

def main():
    t = int(input())

    for _ in range(t):
        n, c = map(int, input().split())
        sizes = list(map(int, input().split()))

        w = find_w(n, c, sizes)
        print(w-1)

if __name__ == "__main__":
    main()
