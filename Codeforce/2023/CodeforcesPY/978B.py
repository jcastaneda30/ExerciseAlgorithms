entrada=int(input())
string=input()
coutn=0
for i in range(entrada-2):
    if string[i]=="x" and string[i+1]=="x" and string[i+2]=="x":
        coutn=coutn+1
print(coutn)