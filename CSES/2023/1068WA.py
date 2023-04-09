import sys

entrada=int(sys.stdin.readline().strip())
while entrada!=1:
    sys.stdout.write(str(entrada)+" ")
    if entrada%2!=0:
        entrada=entrada*3+1
    else:
        entrada=int(entrada/2)
sys.stdout.write(str(entrada))