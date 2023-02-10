#include <stdio.h>
#include <string.h>
#include <ctype.h>
//ý 1
void nhap_va_kiem_tra_chuoi(char nhap[]){
	
	while(1){
		int demhoa=0,demkitu=0,dem=0,demthg=0,demso=0;
		gets(nhap);
		if(strlen(nhap)<7){
			dem++;
		}
		for(int i=0;i<strlen(nhap);i++){
			if(nhap[i]>'A' && nhap[i]<'Z'){
				demhoa++;			
			}
			if(nhap[0]=='P' || nhap[0]=='p'){
				demkitu++;	
			}
			if(nhap[i] > '0' && nhap[i] < '9'){
				demso++;
			}
			if(nhap[i] > 'a' && nhap[i]< 'z'){
				demthg++;
			}
			
		}
		if(dem>0 && demso>0 && demhoa>0 && demkitu>0){
			break;
		}
	}
}
//ý 2
void thongke(char nhap[]){
	int demso=0,demthg=0,demhoa=0;
	for(int i=0;i<strlen(nhap);i++){
		if(nhap[i] > 'a' && nhap[i]< 'z'){
				demthg++;
			}
		if(nhap[i]>'A' && nhap[i]<'Z'){
				demhoa++;			
			}
		if(nhap[i] > '0' && nhap[i] < '9'){
				demso++;
			}
	}
	printf("so chu so la: %d\n",demso);
	printf("so chu so la: %d\n",demhoa+demthg);

}
// ý 3
void xoa(char str[]){
	int i=0, j=0;
	while(i<strlen(str)){
		if(isalnum(str[i])){
			str[j++]=str[i];
		
		}
		i++;
	}
	str[j]='\0';
}

// void xoa2(char *str,int n){
// 	for(int i=n;i<strlen(str);i++){
// 		str[i]=str[i+1];
// 	}
// 	str[strlen(str)-1]='\0';
// }
//ý 4
int main(){
	char nhap[100];
	//ý 4.1
	nhap_va_kiem_tra_chuoi(nhap);
    // for(int i=0;i<strlen(nhap);i++){
	// 	if(isalnum(nhap[i])==0){
	// 		xoa2(nhap,i);
	// 	}
	// }
	// ý 4.2
	thongke(nhap);
	// ý 4.3
	xoa(nhap);
	printf("%s\n",nhap);
	
}
