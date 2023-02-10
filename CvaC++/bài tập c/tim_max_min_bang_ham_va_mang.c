#include <stdio.h>
void nhap(int a[], int n) {
	for (int i = 0; i <= n; i++) {
		printf("nhap so a[%d]",i);
		scanf_s("%d", &a[i]);
        if(a[i]<0){
            printf("ban da nhap sai xin hay nhap lai");
            --i;
            continue;
        }
            
           
	}
}
int max(int a[],int n) {
	int max = a[0];
	int i = 1;
	while (i <= n) {
		if (max < a[i])
			max = a[i];
		i++;
	}
	return max;
}
int min(int a[], int n) {
	int min = a[0];
	int i = 1;
	while (i <= n) {
		if (min > a[i])
			min = a[i];
		i++;
	}
	return min;
}
int main() {
	int a[1000], n;
	printf("nhap so n: ");
	scanf_s("%d", &n);
	nhap(a, n);
	printf("gia tri lon nhat la: %d\n", max(a, n));
	printf("gia tri nho nhat la: %d\n", min(a, n));
	return 0;

}
