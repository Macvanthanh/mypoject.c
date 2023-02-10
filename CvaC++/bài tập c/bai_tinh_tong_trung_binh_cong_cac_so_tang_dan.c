#include <stdio.h>
float nhap() {
	int a, so_sau = -9999;
	float s = 0,tong=0;
	int dem = 0;
	for (;;) {   //vòng lập vô hạn để cho người dung nhập các giá trị tăng dần nếu giá trị sau nhỏ hơn ra trị trc thì kết thúc chương trình

		printf("nhapp so a: ");
		scanf_s("%d", &a);
        //tạo biên số bé để so sánh 
		if (a <= so_sau)
			break;
		else {
			so_sau = a;
			dem++;
			s += a;
		}
	}
	tong = s / dem;
	return tong;
}
int main() {
	printf("s=%f", nhap());
}