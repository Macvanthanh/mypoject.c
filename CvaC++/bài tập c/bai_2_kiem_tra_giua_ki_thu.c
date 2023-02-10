#include<stdio.h>
void kiem_tra(int x) {
	int dem = 0, n = x;
	if (n > 0) {
		while (n > 0) {
			n /= 10;
			dem++;
		}
		printf("so %d co %d chu so la",x,dem);
	}
	else
		printf("ket thuc");
}




int main() {
	int x;
	do {
		printf("nhap so nguyen duong x");
		scanf_s("%d",&x);
		kiem_tra(x);
	} while (x > 0);
	return 0;
}

