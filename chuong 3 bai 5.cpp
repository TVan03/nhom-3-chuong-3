#include <stdio.h>
#include <string.h>

void timKiemTen(char hoTen[], char ten[]) {
    if (strstr(hoTen, ten) != NULL) {
        printf("Ten nay da nhap dung.\n");
    }
    else {
        printf("Ten nay da nhap sai.\n");
    }
}

int main5() {
    char hoTen[100], ten[50];
    printf("Nhap ho ten: ");
    scanf("%[^\n]%*c", hoTen);
    printf("Nhap ten can tim: ");
    scanf("%[^\n]%*c", ten);
    timKiemTen(hoTen, ten);
    return 0;
}
