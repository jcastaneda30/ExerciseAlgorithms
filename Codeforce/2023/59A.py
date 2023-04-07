n=input()
min=0
may=0
for i in n:
    if 90>=ord(i)>=65:
        may+=1
    elif 122>=ord(i)>=97:
        min+=1
if may>min:
    n=n.upper()
elif may<min:
    n=n.lower()
else:
    n=n.lower()
print(n)