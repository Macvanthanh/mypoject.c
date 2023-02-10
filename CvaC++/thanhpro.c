#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char ten_cua_hang[100];
    int doanh_thu;
}thong_tin;

void nhap_thong_tin_cua_hang(thong_tin *cua_hang, int i){
    getchar();
    printf("ten cua hang %d : ", i);
    fgets(cua_hang->ten_cua_hang, 100, stdin);
    printf("nhap doanh thu: ");
    scanf("%d", &cua_hang->doanh_thu);
}

int kiem_tra_doanh_thu(thong_tin cua_hang[], int n){
    for (int i = 0; i < n; i++) {
          int g=strcmp(cua_hang[i].ten_cua_hang,cua_hang[i+1].ten_cua_hang);
            if (strcmp(cua_hang[i].ten_cua_hang,cua_hang[i+1].ten_cua_hang) == 0) {
                return 1 ;
            }
    }
    return 0;
}

int main(){
    thong_tin cua_hang[100];
    int n;
    printf("so cua hang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        nhap_thong_tin_cua_hang(&cua_hang[i], i);
        if(i<1)
            continue;
        if (kiem_tra_doanh_thu(&cua_hang[i], n) == 1) {
            printf("nhap sai roi nhap lai de\n");
            i--;
        }
    }
    return 0;
}