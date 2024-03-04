def sum_of_digits(num):
    return sum(int(digit) for digit in str(num))

def total_sum_after_replacement(n):
    result = []
    for i in range(1, n + 1):
        result.append(sum_of_digits(i))
    return result

# Input reading
t = int(input())
for _ in range(t):
    n = int(input())
    print(total_sum_after_replacement(n))
