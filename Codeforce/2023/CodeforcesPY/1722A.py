casos=int(input())
for i in range(casos):
    xd = input()
    palabra = input()
    if len(palabra)==5:
        if "T" in palabra and "i" in palabra and "m" in palabra and "u" in palabra and "r" in palabra:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")