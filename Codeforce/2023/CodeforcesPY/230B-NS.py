import sys


import math
def is_prime(n):
  for i in range(2,int(math.sqrt(n))+1):
    if (n%i) == 0:
      return False
  return True

cantidad=int(input())
numeros=[int(x) for x in sys.stdin.readline().strip().split()]

for i in numeros:
    if is_prime(i)==False:
        l=1
        r=i
        count=0
        while l<r:
            if i%l==0:
                count=count+1
                l=l+1
            else:
                l=l+1
            if i%r==0:
                count=count+1
                r=r-1
            else:
                r=r-1
            if count>3:
                break
            print(l,count)

        if count==3:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")

