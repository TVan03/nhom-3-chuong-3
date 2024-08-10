#include <stdio.h>

int demKhoangTrang(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    return count;
}

int main2() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin); 
    printf("So luong khoang trang: %d\n", demKhoangTrang(str));
    return 0;
}
