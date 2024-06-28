MOD = 10**9 + 7

def matrix_power(A, n):
    if n == 1:
        return A
    if n % 2 == 0:
        half_power = matrix_power(A, n // 2)
        return matrix_multiply(half_power, half_power)
    else:
        return matrix_multiply(A, matrix_power(A, n - 1))

def matrix_multiply(A, B):
    result = [[0] * len(B[0]) for _ in range(len(A))]
    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD
    return result

def trinacci(K):
    # Define the transition matrix
    transition_matrix = [
        [3, 2, 1, 3],
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 1, 0]
    ]
    
    # Initialize the initial state matrix
    initial_state = [[3], [2], [1], [1]]
    
    # Calculate transition matrix raised to the power of K
    powered_matrix = matrix_power(transition_matrix, K)
    
    # Multiply powered_matrix with initial state to get the final state
    final_state = matrix_multiply(powered_matrix, initial_state)
    
    return final_state[0][0]

# Input
K = int(input().strip())

# Calculate and output the value of t(K) modulo 10^9+7 using matrix exponentiation
print(trinacci(K) % MOD)
