t = int(input())

for i in range(t):
    tamanho = int(input())
    stringg = input()
    letter = "2020"
    situacion = False
    if letter ==  stringg[:len(letter)] or letter==stringg[-len(letter):]:

        situacion=True
    else:        
        for j in range(1,len(letter)+1):
            if stringg[:j]==letter[:j] and stringg[-(len(letter)-j):]==letter[j:len(letter)+1]:
                situacion= True
    if situacion:
        print("YES")
    else:
        print("NO")
        
