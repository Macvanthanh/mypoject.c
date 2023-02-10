string=input()
a=string.split(' ');# hàm tách mảng
stringmax=[]
max=0
for i in a:
    print(i)
    print(len(i))
    if(len(i)>max):
        max=len(i)
        stringmax.append(i)#hàm tên mảng.append(tên biến cần thêm vào mảng) dùng để thêm một phần tử vào mảng 
        
print(max)
print(stringmax)

#các cách xuất nhập mảng
#C1
n=input()
a=[]
for i in range(n):
    tam=int(input(f'a[{i}]'))# nhập phần tử và thêm vào mảng bẳng hàm append
    a.append(tam)
print(a)
#C2
n=input()
a=[None]*n   # tạo ra n nhần tử rỗng
             # None là rỗng
for i in range(n):
    a[i]=int(input(f'a[{i}]'))# nhập phần tử vào chỗ rỗng đó tương ứng với vị trí i
print(a)

# có 2 lưu ý khi sử dụng vòng for dó là: 
# lưu ý 1
n=8
for i in range(2,n,2):# tức là i sẽ bắt đầu bằng 2 chạy đến lúc i<n và mỗi lần quay lại vòng for thì i tăng lên 2
                      # từ đó suy ra được cấu trúc của range là range(start,stope,step) và range chỉ dùng cho các kiểu dữ liệu số và và có điều kiện 
    print(i)
# lưu ý 2
n="thanh pro qua mà"
for i in n: #tức là for này sẽ in từng kí tự trong n 
            # và khong dùng dc in range(n) vì n là một string ko thể cho vào ngoặc dùng range khi biên trong ngoặc là các int,flaot.... hay các giá trị chứ không phải các kí tự
    print(i)
  
