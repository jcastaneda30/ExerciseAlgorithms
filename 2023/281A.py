entrada=input()
if ord(entrada[0])>= 97 and ord(entrada[0])<=122:
    entrada=list(entrada)
    a=ord(entrada[0])-32
    entrada[0]=chr(a)
    entrada="".join(entrada)
print(entrada)