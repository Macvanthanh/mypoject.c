#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef struct {
    int so_nhan_vien;
    char dia_chi[100],ma_cua_hang[100];
    float doanh_so;
    
}thong_tin;
int kiem_tra_thong_tin(thong_tin *cua_hang){
       
        printf("ma cua hang: ");
        gets(cua_hang->ma_cua_hang);
        for(int i=0;i<strlen(cua_hang->ma_cua_hang);i++){
            if(cua_hang->ma_cua_hang[i] <'0' || cua_hang->ma_cua_hang[i] >'9')
              return 1;
        }
        printf("nhap dia chi: ");
        gets(cua_hang->dia_chi);
       
        printf("so nhan vien: ");
        scanf("%d",&cua_hang->so_nhan_vien);
      
        printf("nhap doanh so: ");
        scanf("%f",&cua_hang->doanh_so);
        
        getchar();
        return 0;
}
void in(thong_tin cua_hang,int n,int i){
        printf("+-----+------+----------+----------+----------+\n");
        printf("|%5d|%6s|%10d|%10f|%10s|\n",i,cua_hang.ma_cua_hang,cua_hang.so_nhan_vien,cua_hang.doanh_so,cua_hang.dia_chi);
    
}
void xapxep(thong_tin cua_hang[],int n){
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
            if(cua_hang[i].doanh_so > cua_hang[j].doanh_so){
                thong_tin temp=cua_hang[i];
                cua_hang[i]=cua_hang[j];
                cua_hang[j]=temp;
            }
        }
    }
}
int main(){
    int n;
    thong_tin cua_hang[100];
    printf("nhap so cua hang: ");
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        printf("cua hang %d\n",i);
        if(kiem_tra_thong_tin(&cua_hang[i])==1){
            i--;
        }
    }
    
    xapxep(&cua_hang,n);
    
    printf("+-----+------+----------+----------+----------+\n");
    printf("|  STT|   MCH|       SNV|  doanh so|   dia chi|\n");
    for(int i=0;i<n;i++){
        in(cua_hang[i],n,i);
    }
    printf("+-----+------+----------+----------+----------+\n");

}