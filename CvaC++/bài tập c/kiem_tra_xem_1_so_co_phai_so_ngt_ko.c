#include <stdio.h>
// viết chương trình kiem tra xem n có phải số nguyên tố 

// viết = vòng for
int main() {
	int n;
	printf("nhap  n: ");
	scanf_s("%d", &n);
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem++;
		}
	}
	if (dem == 2) {
		printf("%d\n", n);
	}
}
