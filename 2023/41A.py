s=input()
t=input()
news=[]
for i in range(1,len(s)+1):
    news.append(s[-i])
if "".join(news)==t:
    print("YES")
else:
    print("NO")