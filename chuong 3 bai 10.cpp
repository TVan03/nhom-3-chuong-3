#include <stdio.h>
#include <string.h>

void timKiemKyTuXuatHienNhieuNhat(char str[]) {
    int tanSuat[256] = { 0 };  // Mảng lưu tần suất của các ký tự
    int maxTanSuat = 0;
    char kyTuNhieuNhat;

    for (int i = 0; str[i] != '\0'; i++) {
        tanSuat[(unsigned char)str[i]]++;
        if (tanSuat[(unsigned char)str[i]] > maxTanSuat) {
            maxTanSuat = tanSuat[(unsigned char)str[i]];
            kyTuNhieuNhat = str[i];
        }
    }

    printf("Ky tu xuat hien nhieu nhat la '%c' voi %d lan.\n", kyTuNhieuNhat, maxTanSuat);
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Xóa ký tự xuống dòng

    timKiemKyTuXuatHienNhieuNhat(str);

    return 0;
}
