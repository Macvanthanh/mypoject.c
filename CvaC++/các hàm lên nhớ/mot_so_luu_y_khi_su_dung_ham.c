#include <stdio.h>
char sex() {
	char sex;
	scanf("%c",&sex);
	if (sex == 'n')
		return 1;
	if (sex == 'N')
		return 0;
}
float tong(float cao, float nang,int s) { // s lúc này sẽ là giá trị mà hàm sẽ trả về (return)
                                         // vd nếu nhập sex== n thì chả về giá trị 1 ==> lúc đó s=1 
	float S;
	if (s == 1) {
		S = cao / (nang * nang);// **** lưu ý nhân 2 sô, + 2 số , : 2 số phải có () ko thì giá trị sẽ sai
	}
	if (s == 0) {
		S = cao / (nang * 2);
	}
	return S;
}
int main() {
	float cao;
	float nang;
	printf("nhap cao ");
	scanf("%f", &cao);
	printf("nhap nang ");
	scanf("%f", &nang);
	getchar();// de ko bị bỏ qua nhập sex
	printf("%f",tong(cao, nang, sex()));  //có thể gắn hàm trả về (return) như bên 
}