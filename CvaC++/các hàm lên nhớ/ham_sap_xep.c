#include <stdio.h>
void nhap(int a[],int* n){
    int i=0;
    while(1){
        printf("nhap a[%d]:",i);
        scanf("%d",&a[i]);
        if(a[i]<0)
            break;
        i++;
        (*n)++;
    }
}
void sap_xep(int a[],int *n){
   
    for(int i=0;i<*n;i++){
        for(int j=i+1;j<*n;j++){
           if(a[i]>a[j]){// chú ý đoạn này 
               int temp=a[i];// phai lưu giá trj r ms thay đổi
               a[i]=a[j];//khong được viết như này khi chưa lưu a[i] vào temp :
                            //a[i]=a[j]
                            //a[j]=a[i]
               a[j]=temp;
           }
        }
    }
}
void in(int a[],int* n){
    for(int i=0;i<*n;i++){
        printf("cac phan tuw mang la %d\n",a[i]);
    }
}
int main(){
    int a[100],n;
    nhap(a,&n);
    sap_xep(a,&n);
    in(a,&n);
}