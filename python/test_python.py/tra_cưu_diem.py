a=input()
b=a.split(" ")
dem=0
for i in range(int(b[0])):
    c=input()
    d=c.split(" ")
    if int(d[0])==int(b[1]):
        e=d[1]
        dem += 1
if dem>0 :
    print(e)
else:
    print("No data")
