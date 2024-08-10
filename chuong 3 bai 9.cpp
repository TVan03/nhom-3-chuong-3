#include <stdio.h>
#include <string.h>

void lietKeSoLanXuatHien(char str[]) {
    int tanSuat[256] = { 0 };  // Mảng lưu tần suất của các ký tự

    for (int i = 0; str[i] != '\0'; i++) {
        tanSuat[(unsigned char)str[i]]++;
    }

    printf("So lan xuat hien cua moi ky tu:\n");
    for (int i = 0; i < 256; i++) {
        if (tanSuat[i] > 0) {
            printf("%c: %d lan\n", i, tanSuat[i]);
        }
    }
}

int main9() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Xóa ký tự xuống dòng

    lietKeSoLanXuatHien(str);

    return 0;
}
