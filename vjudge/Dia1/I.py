t = int(input())

for i in range(t):
    aa = int(input())
    cadena = input()
    counter = cadena.count('U')
    if(counter%2):
        print("YES")
    else:
        print("NO")