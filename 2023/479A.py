a=int(input())
b=int(input())
c=int(input())
lista=[a+b*c,a*(b+c),a*b*c,(a+b)*c,a+b+c]
num=0
for i in lista:
    if i>num:
        num=i
print(num)