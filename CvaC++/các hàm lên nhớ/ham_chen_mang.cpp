#include <stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        printf("nhap phan tu a[%d]",i);
        scanf("%d",&a[i]);
    }
}
void chen(int a[],int n,int x,int p){
    for(int i=n-1;i>p;--i){
        a[i]=a[i-1];
    }
    a[p]=x;
}
void in(int a[],int n){
    for(int i=0;i<n;i++){
        printf(" mang sau khi dc chen la %d\n",a[i]);
    }
}
int main(){
    int a[1000],n,x,p;
    printf("nhap so phan tu n: ");
    scanf("%d",&n);
    printf("nhap phan tu x: ");
    scanf("%d",&x);
    printf("vi tri can chen p: ");
    scanf("%d",&p);
    nhap(a,n-1);
    chen(a,n,x,p);
    in(a,n);
}