#include <stdio.h>
typedef struct diem{
    char ten[50];
    float diem;
}St;
void nhap(St n[]){
    int a=0;
    while(a<4){
    printf("nhap ten: ");
    getchar();
    gets(n[a].ten);
    printf("nhap diem: ");
    scanf("%f",&n[a].diem);
    a++;
    }
}
void sapxep(St n[]){
    for(int i=0;i<4-1;i++){
        
        for(int j=i+1;j<4;j++){
            if(n[i].diem<n[j].diem){
                St temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
        }
    }
}
void in(St n[]){
    for(int i=0;i<4;i++)
        printf("cac phan tu trong struct la %s %f\n",n[i].ten,n[i].diem);
}
int main()
{
    St n[100];
        nhap(n);
        sapxep(n);
        in(n);
    
}