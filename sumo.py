a=input()
s=""
for i in a:
    k=bin(ord(i))
    s1=k[2::]
    m=8-len(s1)
    p=str('0'*m )+ s1
    s=s+p
l=[]
for i in range(0,48,6):
    j=s[i:i+6]
    
    l.append(int(str(j),2))


r=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/']
for i in l:
    print(r[i],end='')
print("\n")
c=input()
u=[]
w=[]
w1=[]
for i in c:
    z=r.index(i)
    u.append(z)
q=''
for i in u:
    k1=bin(i)
    s2=k1[2::]
    m1=6-len(s2)
    p1=str('0'*m1 )+ s2
    q=q+p1
g=len(q)

for i in range(0,g,8):
    j=q[i:i+8]

    
    l1=int(str(j),2)
    w1.append(l1)
    w.append(j)
    print(chr(l1),end='')

#Y3jvc3MgdGhpcyBib3RoIGJsYWNrIGJ1Y2sgdGFibGVzIHNsaWRlcyBwcm9ncmFtIGFuYWx5c2lzMDEy
