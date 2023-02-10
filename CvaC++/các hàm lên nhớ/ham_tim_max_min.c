#include <stdio.h>
// hàm max, min
int max(int a[],int n){
    int max=a[0];
    for(int i=0;i<=n;i++){
        if ( max < a[i]){
            max=a[i];
        }
    }
    return max;
}
int min(int a[],int n){
    int min=a[0];
    for (int i=0;i <= n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}
// goi ham
int main(){
    // kết hợp với hàm nhâp 
    printf("max= %d\n",max(a,n));
    printf("max= %d\n",min(a,n));
}