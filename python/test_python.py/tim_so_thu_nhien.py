n=input()
tong=0
chuoi=n.split(" ")
for i in range(int(chuoi[0]),int(chuoi[1])+1):
    if int(chuoi[0])<= i**2 - 100*i + 1 <= int(chuoi[1]):
        tong += 1
if tong>0:
    print(tong)
    for i in range(int(chuoi[0]),int(chuoi[1])+1):
        if int(chuoi[0])<= i**2 - 100*i + 1 <= int(chuoi[1]):
         print(i,end=" ")
else:
    print("vo nghiem")