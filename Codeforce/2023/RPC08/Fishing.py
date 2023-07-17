def fishing(s, n):
  fish = []
  for _ in range(n):
    x, y = map(int, input().split())
    fish.append((x, y))

  max_fish = 0
  for i in range(101):
    for j in range(101):
      count = 0
      for x, y in fish:
        if (i <= x <= i + s and j <= y <= j + s):
          count += 1
      max_fish = max(max_fish, count)

  return max_fish


if __name__ == "__main__":
  s, n = map(int, input().split())
  print(fishing(s, n))
