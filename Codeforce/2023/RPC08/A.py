a,b,c=map(int,input().split())

final="3"

if a==b+c or b==a+c or c==a+b:
    final="1"

if a==b*c or b==a*c or c==a*b:
    final="2"

print(final)

    