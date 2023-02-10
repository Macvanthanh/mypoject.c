a=input("nhap n1 và n2: ")
b=a.split(' ')
d=[None]*100
c=0
for i in range(int(b[0])+1,int(b[1])+1,1):
    if int(b[0]) <= i**2 -100*i +1 <= int(b[1]):
        c += 1
        d[i]=i
       
print(c)
for i in range(int(b[0]),int(b[1])):
    print(d[i],end=" ")
