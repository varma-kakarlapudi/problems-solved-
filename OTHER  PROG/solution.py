a=input()
b=int(input())
v=['a','e','i','o','u']
l1=len(a)
l2=0
c=0
h=0
ans=0
for i in range(l1):
    if(a[i] not in v):
        l2=l2+1
        
        if(l2==b):
            l=i+1
            break
            
m=l1-l+1
p=[]
y=m
for j in range(m):

    for k in range(y):
        s=a[k:l+k]
        p.append(s)
    for i in p:
      
        x=list(i)
        for j in x:
            if(j not in v):
                c=c+1
               
        x=[]
        if(c>=b):
            h=h+1
        c=0
    if(h==len(p)):
        print(l)
        ans=1
        break
    l=l+1
    p=[]
    c=0
    h=0
    y=y-1
if(ans==0):
    print("-1")   
