def valid(x, processing_times, k):
    total_jobs = 0
    for pi in processing_times:
        total_jobs += x // pi
    
    return total_jobs >= k

def minimum_processing_time(k, n, processing_times):
    low = 1
    high =max(processing_times) * k 

    while low <= high:
        mid = low + (high - low) // 2

        if valid(mid, processing_times, k):
            high = mid - 1
        else:
            low = mid + 1

    return low

# Example scenario
k = 8
n = 3
processing_times = [2, 3, 7]

result = minimum_processing_time(k, n, processing_times)
print("Minimum total processing time:", result)
