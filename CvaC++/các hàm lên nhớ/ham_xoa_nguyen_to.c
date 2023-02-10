#include <stdio.h>
void xoa(int a[],int* n,int vt){   
    for(int i=vt;i<*n-1;i++){
        a[i]=a[i+1];
    }
    *n-=1;
}
void ngto(int a[],int* n){
    for(int i=0;i<*n;i++){
        int dem=0;
        int vt=i;
        for(int j=1;j<=a[i];j++){
            if(a[i]%j==0)
                dem++;
        }
        if(dem==2){
            xoa(a,n,i);
            
        }
    }
}
void in(int a[],int* n){
    for(int i=0;i<*n;i++){
        printf("cac phan tu mang la: %d\n",a[i]);
    }
}
int main()
{
    int a[1000],n;
    printf("nhap so phan tu cua a:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ngto(a,&n);
    in(a,&n);
}