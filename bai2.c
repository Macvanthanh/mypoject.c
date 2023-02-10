#include <stdio.h>
#include <string.h>
#include <ctype.h>
// ý 1
typedef struct{
	char mau_xe[7], ten_xe[10];
	int cho_ngoi;
	float gia;
}thong_tin;
void nhap_thong_tin(thong_tin *oto){
	int lua_chon;
	getchar();
	printf("nhap ten xe: ");
	gets(oto->ten_xe);
	printf("nhap ten mau xe: ");
	scanf("%d",&lua_chon);
	

	switch(lua_chon){
		case 1:
			strcpy(oto->mau_xe,"do");
			break;
		case 2:
			strcpy(oto->mau_xe,"trang");
			break;
		case 3:
			strcpy(oto->mau_xe,"den");
			break;
	}


	printf("nhap cho ngoi: ");
	scanf("%d",&oto->cho_ngoi);
	printf("nhap gia xe: ");
	scanf("%f",&oto->gia);
}
// ý 3
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
// ý 2
void in(thong_tin oto,int n){

	printf("+---+------+--------+-----------+-------------------+\n");
	printf("|%3d|%6s|%8s|%11d|%19f|\n",n,oto.mau_xe,oto.ten_xe,oto.cho_ngoi,oto.gia);
	
}

int main(){
	thong_tin oto[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		nhap_thong_tin(&oto[i]);
	}
	xap_sep(oto,n);
    printf("+---+------+--------+-----------+-------------------+\n");
	printf("|STT|Mau   |Hang xe |So cho ngoi|Gia ban (trieu VND)|\n");
	for(int i=0;i<n;i++){
		in(oto[i],i);
	}
	printf("+---+------+--------+-----------+-------------------+\n");
}