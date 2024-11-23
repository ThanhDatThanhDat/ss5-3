#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So nhap vao khong phai la so nguyen duong\n");
        return 1; 
    }
    int i; 
    for ( i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tong cac so tu 1 den %d là: %d\n", n, sum);

    return 0;
}

