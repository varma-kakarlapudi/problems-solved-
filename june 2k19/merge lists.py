def merge_list(list1, list2):
    merged_data=""
    #write your logic her
    list2=list2[::-1]
    for i in range(len(list2)):
        if(list2[i] == None):
            list2[i]=''
            
    for i in range(len(list1)):
        if(list1[i] == None):
            list1[i]=''
            
    for i in range(len(list1)):
        merged_data=merged_data+list1[i]+list2[i]+str(" ")
    return merged_data

#Provide different values for the variables and test your program
list1=['A', 'app','a', None,'ke', 'th', 'doc', 'awa']
list2=['y','tor','e','eps','day',None,'le','n']
merged_data=merge_list(list1,list2)
print(merged_data)
