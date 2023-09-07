T = int(input())

for i in range(T):
    fixes = 0
    face = input()
    face = list(face)
    if face[-1]=='_' or face[0]=='_':
            fixes+=1 
    for j in range(len(face)-1):
        if face[j] == '^' and (face[j + 1] == '^' or face[j + 1] == '_'):
            pass
        elif face[j] == '_' and face[j + 1] == '^':
            pass
        else:
            fixes += 1

    print(fixes)