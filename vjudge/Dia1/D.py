t = int(input())

for i in range(t):
    cadena = input()
    if(len(cadena)>10):
        print(f"{cadena[0]}{len(cadena)-2}{cadena[-1]}")
    else:
        print(cadena)