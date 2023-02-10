a=input()
b=a.split(" ")
luu=[None]*int(b[0])
luu1=[None]*int(b[0])
dem=0
j=0
for i in range(int(b[0])):
    c=input()
    d=c.split(" ")
    if int(d[1])>= int(b[1]):
        luu[j]=d[1]
        luu1[j]=d[0]
        j += 1
        dem += 1

print("Tong so sinh vien tham du ky thi cuoi ky:",dem)
for y in range(dem):
    print(luu1[y],end=" ")
    print(luu[y])