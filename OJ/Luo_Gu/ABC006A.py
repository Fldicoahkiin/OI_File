n=input()
flag=bool(False)
for i in n:
    if (i == '3'):
        flag=True
        break
n=int(n)
if((n%3) == 0):
    flag=True
if(flag==True):
    print("YES")
if(flag==False):
    print("NO")