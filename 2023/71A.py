n=int(input())
for i in range(n):
    palabra=input()
    palabra2=list(palabra)
    if len(palabra2)>10:
        print(palabra[0],(len(palabra)-2),palabra[-1],sep="")
    else:
        print(palabra)