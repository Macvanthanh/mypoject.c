#include <stdio.h>
// viết chương trình in tất cả các số nguyên tố từ 1 đến n

// viết = vòng for
int main() {
	int n;
	printf("nhap  n: ");
	scanf_s("%d", &n);
	for (int i=1; i <= n; i++) {
		int dem = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j==0) {
				dem++;
			}
		}
		if (dem == 2) {
			printf("%d\n", i);
		}
	}
}
