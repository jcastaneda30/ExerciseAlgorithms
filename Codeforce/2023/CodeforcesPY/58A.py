n=list(input())
hola=["h","e","l","l","o"]
index=0
flag=0
for i in range(len(n)):
    if n[i]==hola[index]:
        index+=1
    if index==5:
        flag=1
        break
if flag==1:
    print("YES")
else:
    print("NO")