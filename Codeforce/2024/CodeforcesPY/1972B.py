t = int(input())

for _ in range(t):
    # Read the input
    n = int(input())
    coins = input().strip()
    countU= coins.count('U')
    if countU%2!=0:
        print("YES")
    else:
        print("NO")
