import md as s

p1={'name':'Virat Kohli', 'role':'bat', 'runs':112, '4':10, '6':0, 'balls':119, 'field':0}
p2={'name':'du Plessis', 'role':'bat', 'runs':120, '4':11, '6':2, 'balls':112, 'field':0}
p3={'name':'Bhuvneshwar Kumar', 'role':'bowl', 'wkts':1, 'overs':10, 'runs':71, 'field':1}
p4={'name':'Yuzvendra Chahal', 'role':'bowl', 'wkts':2, 'overs':10, 'runs':45, 'field':0}
p5={'name':'Kuldeep Yadav', 'role':'bowl', 'wkts':3, 'overs':10, 'runs':34, 'field':0}
l=[p1,p2,p3,p4,p5]
d=dict()
for i in range(5):
    if(l[i].get('role')=='bat'):
        k=s.batting(l[i].get('runs'),l[i].get('4'),l[i].get('6'),l[i].get('balls'),l[i].get('field'))
        
        d['Name'] = l[i].get('name')
        d['batscore'] = k
        print(d)
        d.clear()
        
    else:
        k=s.bowling(l[i].get('runs'),l[i].get('wkts'),l[i].get('overs'),l[i].get('field'))
        

        d['Name'] = l[i].get('name')
        d['bowlscore'] = k
        print(d)
        d.clear()
        
