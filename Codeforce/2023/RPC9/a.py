n, l, h = map(int, input().split())
profits = [int(input()) for _ in range(n)]

min_profitable_segments = float('inf')
max_profitable_segments = 0

for segment_size in range(l, h + 1):
    for start_day in range(n):
        total_profit = 0
        profitable_segments = 0

        for i in range(start_day, n, segment_size):
            total_profit += profits[i]
            if total_profit > 0:
                profitable_segments += 1

        min_profitable_segments = min(min_profitable_segments, profitable_segments)
        max_profitable_segments = max(max_profitable_segments, profitable_segments)

print(min_profitable_segments, max_profitable_segments)
