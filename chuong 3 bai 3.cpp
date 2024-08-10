#include <stdio.h>
#include <string.h>

void xoaKhoangTrangThua(char str[]) {
    int n = strlen(str);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (!(str[i] == ' ' && str[i + 1] == ' ')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    // Xoa khoang trang o dau chuoi
    if (str[0] == ' ') {
        for (int i = 0; i < strlen(str); i++) {
            str[i] = str[i + 1];
        }
    }

    // Xoa khoang trang o cuoi chuoi
    if (str[strlen(str) - 1] == ' ') {
        str[strlen(str) - 1] = '\0';
    }
}

int main3() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    xoaKhoangTrangThua(str);
    printf("Chuoi sau khi xoa khoang trang thua: %s\n", str);
    return 0;
}
