#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef struct{
	char mau_xe[5], ten_xe[10];
	int cho_ngoi;
	float gia;
}thong_tin;
void nhap_thong_tin(thong_tin *oto){
	getchar();
	printf("nhap ten xe: ");
	fgets(oto->ten_xe,10,stdin);
	printf("nhap ten mau xe: ");
	fgets(oto->mau_xe,5,stdin);
	printf("nhap cho ngoi: ");
	scanf("%d",&oto->cho_ngoi);
	printf("nhap gia xe: ");
	scanf("%f",&oto->gia);
}
void xap_sep(thong_tin oto[],int n){
	for (int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			if(oto[i].gia < oto[j].gia){
				thong_tin temp=oto[i];
				oto[i]=oto[j];
				oto[j]=temp;
			}
		}
	}
}
void in(thong_tin oto,int n){
	for(int i=0;i<n;i++){
	printf("+----+--------+---------+---------+-------------+\n");
	printf("|%5d|%6s|%10d|%10f|%10s|\n",i,oto.mau_xe,oto.ten_xe,oto.cho_ngoi,oto.gia);
	}
}
int main(){
	thong_tin oto[100];
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		nhap_thong_tin(&oto[i]);
		xap_sep(&oto[i],n);
	}
    printf("+----+--------+------------+-----------+-------------------+\n");
	printf("|STT |Mau     |Hang xe     |So cho ngoi|Gia ban (trieu VND)|\n");
	for(int i=0;i<n;i++){
		in(oto[i],n);
	}
}