n=int(input())
l=list(map(int,input().split()))
d={}
l.sort()
for i in l:
  if i not in d:
    d[i]=1
  else:
    d[i]+=1
k=int(input())
for i in d:
  if d[i]==k:
    print(i)
    break