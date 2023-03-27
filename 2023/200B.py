n=int(input())
entrada=input().split()
entrada=[int(x) for x in entrada]
acum1=0
acum2=0
for i in entrada:
    acum1+=i
    acum2+=100
print(acum1, acum2)
print((acum1/acum2)*100)