import math
AB,AC,CB=map(int, input().split())

B=int(math.sqrt((CB*AB)/AC))
A=AB//B
C=CB//B

result = 4*A+4*B+4*C

print(result)