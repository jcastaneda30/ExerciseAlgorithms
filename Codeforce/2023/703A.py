n=int(input())
mishka=0
chris=0
for i in range(n):
    entrada=[int(x) for x in input().split()]
    if entrada[0]>entrada[1]:
        mishka=mishka+1
    elif entrada[0]<entrada[1]:
        chris=chris+1

if mishka>chris:
    print("Mishka")
elif mishka<chris:
    print("Chris")
else:
    print("Friendship is magic!^^")