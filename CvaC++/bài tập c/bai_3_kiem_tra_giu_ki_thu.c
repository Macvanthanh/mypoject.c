#include <stdio.h>
int kiem_tra_so_nguyen_to(int x) {
    int dem = 0;
    for (int i = 1; i <= x; i++) {
        if ((x%i) == 0) {
            dem++;
        }
    }
    if (dem <= 2)
        return 1;
    else
        return 0;
}
void max(int a, int b, int c, int d) {
    int Max = a;
    if (Max < b)
        Max = b;
    if (Max < c)
        Max = c;
    if (Max < d)
        Max = d;
    printf("Max=%d\n", Max);
}
int main() {
    int a, b, c, d, dem = 0;
    do {
        printf("nhap vao 4 so a,b,c,d:");
        scanf_s("%d%d%d%d", &a, &b, &c, &d);
        if (kiem_tra_so_nguyen_to(a))
            dem++;
        if (kiem_tra_so_nguyen_to(b))
            dem++;
        if (kiem_tra_so_nguyen_to(c))
            dem++;
        if (kiem_tra_so_nguyen_to(d))
            dem++;
        max(a, b, c, d);
        if (dem > 1) {
            printf(" so nguyen to %d\n", dem);
            printf(" ban da nhap sai dk de bai\n");
        }
        if(dem<=1)
            printf(" so nguyen to %d\n", dem);
    } while (dem > 1);

}