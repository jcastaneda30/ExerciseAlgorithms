entrada=input()
count1=0
count0=0
for i in range(len(entrada)):
    if entrada[i]=="1":
        count1+=1
        count0=0
        if count1==7:
            print("YES")
            break
    elif entrada[i]=="0":
        count1=0
        count0+=1
        if count0==7:
            print("YES")
            break
    if i==len(entrada)-1:
        print("NO")