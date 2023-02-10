#include <stdio.h>
void nhap(int a[]) {//hàm void là hàm ko trả về tức là ko có return
	int i = 0;
	do {
		printf("nhap gia tri a: ");
		scanf_s("%d", &a[0]);//lưu ý phải có & (quên mấy lần rồi đấy )
		if (a[0] < 0)
			printf("ban da nhap sai xin nhap lai\n");
	} while (a[0] < 0);
}


// nhớ kiểu tra về phải là float do S kiểu số thực ==> hàm cx phải là số thực
// tức là trả về kiểu j thì hàm kiểu đó
//vd: trả về có giá trị thực như bên dưới thì hàm phải là float
//vd:trả về giá trị kí tự thì dùng hàm char (thông thường dùng hàm void cho kiểu chữ)
float kiem_tra(int a[]) {
	int i = 1;
	float S = 0;
	while (i <= a[0]) {
		int dem = 0;
		int j = 1;
		while (j <= i) {
			if (i % j == 0) {
				dem++;
			}
			j++;
		}
		if (dem == 2)
			S =S + (1.0/ i);
		i++;
		 
	}
	return S;

}


int main() {
	int a[3];
	nhap(a);
	printf("%f", kiem_tra(a));
}