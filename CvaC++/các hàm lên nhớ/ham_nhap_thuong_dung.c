#include <stdio.h>
// truyền vào giá trị là a và n
void nhap(int a[],int n){
    for(int i=0;i<=n;i++){
        printf("nhap gia tri a[%d]",i);
        scanf("%d",&a[i]);
        // nếu a <0 thì nhâp lại mà ko làm thay đổi giá trị của mảng 
        //vd a[2]=-7 thì bắt nhập lại a[2] nếu nhập a[2]>0 thì sẽ nhận giá trị mới là là số lớn hơn 0 đó

        if(a[i]<0){
            printf("ban da nhap sai xin moi nhap lai\n");
            i--; // dùng để trừ đi giá trị i khi nhập sai điều kiện a>0 thì nhập giá trị cho biến đó 
            // VD: nếu a[2] nhập sai thì lúc đó i sẽ bi - 1 ==> sẽ trở thành a[1] đi lên vòng for thì lại đc +1 trở thành a[2] và nhập lại giá trị mới chao a[2] cứ như thế mà lập lại 
            continue;
        }
    }
}
//ok
// hàm gọi ra 
int main(){
    int a[1000];
    int n;
    printf("nhap gia tri n: ");
    scanf("%d",&n);
    nhap(a,n);
}