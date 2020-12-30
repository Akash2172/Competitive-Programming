n=int(input())
a=" "
b="#"
for i in range(1,n,+1):
    print((n-i-1)*a,i*b)
print(b*n)
