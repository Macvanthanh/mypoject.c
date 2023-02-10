n=int(input())
if n<=10**5:
    mang1=input()
    mang2=mang1.split(" ")
    for i in range(0,n):
        if int(mang2[i])>=10**9:
            break
        print(mang2[i],end=" ")
