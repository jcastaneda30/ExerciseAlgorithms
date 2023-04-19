def findSmallest(arr): #Encontrar el elemento mas pequeño de una lista
    smallest = arr[0] 
    smallest_index = 0 
    for i in range(1, len(arr)): 
        if arr[i] < smallest:
            smallest = arr[i] 
            smallest_index = i
    return smallest_index

def selectionSort(arr):      #Basicamente va sacando de una lista y lo va metiendo a otra 
    newArr = []
    for i in range(len(arr)):
        smallest = findSmallest(arr) 
        newArr.append(arr.pop(smallest))
    return newArr