n=int(input())
entrad=list(input())
count=0
for i in range(n):
    for k in range(len(entrad)):
        if k!=(len(entrad)-1) and (entrad[k]==entrad[k+1]):
            entrad.pop(k)
            count+=1
            break
print(count)
