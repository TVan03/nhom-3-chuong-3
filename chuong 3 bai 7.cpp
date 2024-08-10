#include <stdio.h>
#include <string.h>

void chenTu(char str[], char tuCanChen[], int viTri) {
    char ketQua[100] = "";
    strncpy(ketQua, str, viTri);  
    ketQua[viTri] = '\0';         
    strcat(ketQua, tuCanChen);    
    strcat(ketQua, str + viTri);  
    strcpy(str, ketQua);          
}

int main7() {
    char str[100], tuCanChen[20];
    int viTri;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Xóa ký tự xuống dòng

    printf("Nhap tu can chen: ");
    fgets(tuCanChen, sizeof(tuCanChen), stdin);
    tuCanChen[strcspn(tuCanChen, "\n")] = 0;

    printf("Nhap vi tri can chen: ");
    scanf("%d", &viTri);

    chenTu(str, tuCanChen, viTri);
    printf("Chuoi sau khi chen: %s\n", str);

    return 0;
}
