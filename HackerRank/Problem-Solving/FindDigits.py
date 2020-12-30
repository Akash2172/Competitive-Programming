# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
lt=[]
ls=[]
k=0
for i in range(n):
    a=int(input())
    lt.append(a)

for num in lt:
    k=0
    nod=num
    while num:
        
        digit=num%10
        if(digit!=0):
            if (nod%digit==0):
                k=k+1
        
        
        num=num//10
    ls.append(k)
for out in ls:
    print(out)
        
            
