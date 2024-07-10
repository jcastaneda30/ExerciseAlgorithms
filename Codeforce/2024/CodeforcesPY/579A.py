n = int(input())

counter = 0

while (n!=1):
    if(n%2):
        counter+=1
        n-=1
    else:
        n=n//2
counter+=1
print(counter)