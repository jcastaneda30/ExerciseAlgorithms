def lower_bound(arr, target):
    left, right = 0, len(arr)
    while left < right:
        mid = left + (right - left) // 2
        if arr[mid] < target:
            left = mid + 1
        else:
            right = mid
    return left
entrada = int(input())
for i in range(entrada):
    firtsYear = int(input())-1
    yearNotRealizin = [int(x) for x in input().split()]
    number=yearNotRealizin.pop(0)
    finallyYear=int(input())
    yearCount=lower_bound(yearNotRealizin,finallyYear)
    result = finallyYear-firtsYear-yearCount
    print(result)


