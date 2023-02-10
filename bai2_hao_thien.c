
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// ý 1: tạo lập struct
typedef struct{
    char tenxe[10],mauxe[5];
    int chongoi;
    float gia;
}thongtinxe;

void nhap(int i,thongtinxe *oto){
    int luachon;
    getchar();
    printf("ten hang xe[%d]: ",i);
    gets(oto->tenxe);
    
    printf("mau xe[%d]: ",i);
    scanf("%d",&luachon);
    // lệnh strcpy(a,c) tức là copy từ mảng a sang c
    // lệnh này trong thư viện string.h
    switch(luachon){
        case 1:
            strcpy(oto->mauxe,"den");
            break;
        case 2:
            strcpy(oto->mauxe,"trang");
            break;
        case 3:
            strcpy(oto->mauxe,"do");
            break;
    }
    do{
        printf("cho ngoi[%d]: ",i);
        scanf("%d",&oto->chongoi);
        if(oto->chongoi<0)
            continue;
        printf("gia[%d]: ",i);
        scanf("%f",&oto->gia);
        
    }while(oto->chongoi<0 && oto->gia<0);
    
}
//ý 2: gọi các thông tin có trong struct
void in(thongtinxe oto,int i){
    printf("+-----+-----+---------+-------------+-------------------+\n");
    printf("|%5d|%5s|%9s|%13d|%19f|\n",i,oto.mauxe,oto.tenxe,oto.chongoi,oto.gia);
    
}
//ý 3: thuật toán xắp sếp đơn giản (Selection Sor)
void xapxep(thongtinxe oto[],int n){
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(oto[j].gia < oto[i].gia){
                thongtinxe temp=oto[i];
                oto[i]=oto[j];
                oto[j]=temp;
            }
            
        }
    }
}
// ý 5: gọi các hàm đã viết vào main

int main()
{
   thongtinxe oto[100];
   int n;
   printf("nhap so oto: ");
   scanf("%d",&n);
   // ý 5.1
   for(int i=0;i<n;i++){
       nhap(i,&oto[i]);
   }
   // ý 5.3
   xapxep(oto,n);
   // ý 5.2
   printf("+-----+-----+---------+-------------+-------------------+\n");
   printf("| SST | Mau | Hang xe | So cho ngoi |gia ban (trieu VND)|\n");
   for(int i=0;i<n;i++){
       in(oto[i],i);
      
   }
   printf("+-----+-----+---------+-------------+-------------------+\n");
   
   
}