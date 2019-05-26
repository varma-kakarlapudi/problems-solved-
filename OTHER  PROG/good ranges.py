n,m=map(int ,input().split())
l=[]
s=0
minimum = 9999999
maximum = -999999
while(m):
    m=m-1
    b=int(input())
    if(b < minimum):
        minimum = b
    if(b > maximum):
        maximum = b
    if b not in l:
        s = s + b
        l.append(b)
        if(len(l)==1):   
            ans=n+1
            print(ans)
        else:
            ans = n+1 -maximum - minimum + (2*s)
            print(ans)
    else:
        print(ans)
        
        
