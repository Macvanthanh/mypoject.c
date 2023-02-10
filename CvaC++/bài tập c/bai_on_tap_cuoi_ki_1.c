#include <stdio.h>
#include <string.h>
#include <ctype.h>
void kiem_tra_xau_ki_tu(char xau_ki_tu[]){
    while(1){
        int dem=0;
        printf("nhap xau ki tu: ");
        gets(xau_ki_tu);
        if(strlen(xau_ki_tu) < 100){
            for(int i=0;i<strlen(xau_ki_tu);i++){
                if(xau_ki_tu[i] < '0' || xau_ki_tu[i] > '9'){
                    dem++;
                    break;
                    }
            }
        }
        if(dem==0){
            break;
        }
    }
}
void kiem_tra_so_lan_xuat_hien_ki_tu(char xau_ki_tu[]){
    int max=-9999;
    char temp;
    for(int i=0;i<strlen(xau_ki_tu);i++){
        int dem=1;
        for(int j=i+1;j<strlen(xau_ki_tu);j++){
            if(xau_ki_tu[i] == xau_ki_tu[j])
                dem++;
        }
        if(max<dem){
            max=dem;
            temp=xau_ki_tu[i];
        }
    }
    printf(" so lan xuat hien la: %d\n",max);
    printf(" ki tu xuat hien nhieu nhat la: %c\n",temp);

}
int main(){
    char xau_ki_tu[1000];
    kiem_tra_xau_ki_tu(xau_ki_tu);
    kiem_tra_so_lan_xuat_hien_ki_tu(xau_ki_tu);
}