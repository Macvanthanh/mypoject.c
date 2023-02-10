#include <stdio.h>

int main() {
	int n,x;
	printf("nhap so x: ");
	scanf("%d", &x);
	printf("nhap so n: ");
	scanf("%d", &n);
	int sum = 1;
	int mau = 0;
	int gg = -1;
	float tong = 0;
	for (int i = 1; i <= n; i++) {
		sum *= x;
		mau += i;
		tong += (gg * (1.0 * sum)) / mau;
		gg *= -1;
	}
	printf("%0.5f",tong);
}
