a=True
b=False
c=True
if not a or b:
  print("1")
elif not a or not b and c:
  print("2")
elif not a or b or not b and a:
  print("3")
else:
  print("4")
 
 
s = set("code of geeks")
print(s.intersection("geeks "))