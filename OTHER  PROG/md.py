points=0
sr=0
m=0
#runs = a;    4's = b ;  6's = c ; balls = d ;  field = e ;
def batting(a,b,c,d,e):
    points=0
    if(a > d):
        points = points + 4
    else:
        sr= a/d
        if(sr >= 0.8 ):
            points = points + 2

    points = points + (a//2)
    points = points + (c*2) + b
    m = a - (b*4) - (c*6)
    if(m>=50):
        points = points + 5
    elif(m>=100):
        points = points +10
    if( e ):
        points = points + (10*e)

    return points

#runs = a;    wkts = b ;  overs = c ;  field = e ;
def bowling(a,b,c,d):
    points = 0
    points = points + (10 * b)
    if(b >= 5 ):
        points = points + 10
    elif(b>=3):
        points = points + 5

    m = a/c
    if( m <2):
        points = points + 20
    elif(m <= 3.5 ):
        points = points + 15
    elif( m <= 4.5 ):
        points = points + 10
    if( d ):
        points = points + (10*d)

    return points 
