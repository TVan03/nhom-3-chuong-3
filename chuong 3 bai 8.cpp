#include <stdio.h>
#include <string.h>

void xoaTu(char str[], char tuCanXoa[]) {
    char* viTri = strstr(str, tuCanXoa);
    if (viTri != NULL) {
        int doDai = strlen(tuCanXoa);
        strcpy(viTri, viTri + doDai);  // Sao chép phần sau từ cần xóa lên vị trí đầu từ
    }
}

int main8() {
    char str[100], tuCanXoa[20];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Xóa ký tự xuống dòng

    printf("Nhap tu can xoa: ");
    fgets(tuCanXoa, sizeof(tuCanXoa), stdin);
    tuCanXoa[strcspn(tuCanXoa, "\n")] = 0;

    xoaTu(str, tuCanXoa);
    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}
