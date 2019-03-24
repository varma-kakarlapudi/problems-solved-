import math
t=int(input())
while(t):
    t=t-1
    a=input()
    a=a.split(" ")
    b=int(a[0])
    c=int(a[1])
    
    numerator = math.factorial(b+c)
    
    denominator = math.factorial(b) * math.factorial(c)
    
    print(b+c,numerator//denominator)
