n=input()
countN=0
countY=0
for i in n:
    if i=="7" or i=="4":
        countY+=1
if countY==4 or countY==7:
    print("YES")
else:
    print("NO")