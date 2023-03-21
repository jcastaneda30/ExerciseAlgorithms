n=int(input())
entrada=input()
countA=0
countD=0
for i in entrada:
    if i=="A":
        countA+=1
    else:
        countD+=1
if countD>countA:
    print("Danik")
elif countD<countA:
    print("Anton")
else:
    print("Friendship")
