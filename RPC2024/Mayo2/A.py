n = input()
parenteiss =  list(input())
index = 0
while index<len(parenteiss)-1:
    if parenteiss[index]=='(' and parenteiss[index+1]==')':
        parenteiss.insert(index+1,'1')
    elif(parenteiss[index]==')' and parenteiss[index+1]==')'):
        parenteiss.insert(index+1,'+1')
    elif parenteiss[index]==')' and parenteiss[index+1]=='(':
        parenteiss.insert(index+1,'*')
    index+=1
print(eval(''.join(parenteiss)))