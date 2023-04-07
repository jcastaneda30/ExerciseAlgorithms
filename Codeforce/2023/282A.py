n=int(input())
x=0
for i in range(n):
    entrada=input()
    if "++" in entrada and "X" in entrada:
        x+=1
    elif "--" in entrada and "X" in entrada:
        x-=1
print(x)