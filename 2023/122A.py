n=int(input())
lista=[4,7,47,74,444,447,474,744,774,747,477,777]
count=0
for i in lista:
    if n>=i:
        if n%i==0:
            count+=1
if count>0:
    print("YES")
else:
    print("NO")