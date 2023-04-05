a=input().split()
n,m=map(int,a)
numero=[int(x) for x in input().split()]
numero.sort()
nose=numero[n-1]-numero[0]
for i in range(1,m-n+1):
    if numero[i+n-1] - numero[i]<nose:
        nose=numero[i+n-1] - numero[i]
print(nose)