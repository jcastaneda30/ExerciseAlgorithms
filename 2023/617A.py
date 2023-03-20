x = int(input()) # Input the friend's house coordinate

steps = 0 # Initialize the number of steps taken
position = 0 # Initialize the elephant's position

while position < x:
    if x - position >= 5:
        position += 5
    elif x - position >= 4:
        position += 4
    elif x - position >= 3:
        position += 3
    elif x - position >= 2:
        position += 2
    else:
        position += 1
    steps += 1
print(steps)