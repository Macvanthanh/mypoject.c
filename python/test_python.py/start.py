

a=input()
b=a.split(" ")
nhat1=[None]*int(b[0]) 
nhat2=[None]*int(b[0])
sosinhvien=[None]*b[0]
caonhat=0
dem=0
for i in range(int(b[0])+1):
    c=input()
    d=c.split(" ")
    nhat1[i]=int(d[0])
    nhat2[i]=int(d[1])
for j in range(int(b[0])):

    for g in range(i,int(b[0])):

        if nhat1[j] < nhat1[g+1]:
            temp= nhat1[i]
            temp2= nhat2[i]
            nhat1[i]=nhat1[g+1]
            nhat1[g+1]=temp
            nhat2[i]=nhat2[g+1]
            nhat2[g+1]=temp2
        g += 1
for z in range(int(b[0])):
    print(nhat1,end=" ")
    print(nhat2,end="\n")

