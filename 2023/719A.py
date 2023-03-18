entrada=input().split()
entrada2=[int(x) for x in entrada]
a=entrada2[0]
b=entrada2[1]
count=0
while a<=b:
    a*=3
    b*=2
    count+=1
print(count)