t=int(input())
letters = {"a":0,"b":1,"c":2,"d":3,"e":4,"f":5,"g":6,"h":7}
numbers = {0: 'a', 1: 'b', 2: 'c', 3: 'd', 4: 'e', 5: 'f', 6: 'g', 7: 'h'}

for i in range(t):
    actual = input()
    for i in range(1,8):
        if i == int(actual[1]):
            continue
        print(actual[0]+str(i))
    for key in letters.keys():
        if actual[0]==key:
            continue
        print(key+str(letters[key]+1))     