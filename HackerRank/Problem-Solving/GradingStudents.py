n=int(input())
list1=[]



for i in range(n):
    a=int(input())
    list1.append(a)
for i in range(n):
    if(list1[i]>37):
        if (list1[i]%5==3):
            list1[i]=list1[i]+2
        elif(list1[i]%5==4):
            list1[i]=list1[i]+1
    
    

for out in list1:
    print(out)

    
        

