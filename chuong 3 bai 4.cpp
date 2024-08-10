#include <stdio.h>
#include <ctype.h>

void vietHoaKyTuDau(char str[]) {
    int capitalize = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            capitalize = 1;
        }
        else if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        }
        else {
            str[i] = tolower(str[i]);
        }
    }
}

int main4() {
    char str[100];
    printf("Nhap chuoi: ");
    scanf("%[^\n]%*c", str);
    vietHoaKyTuDau(str);
    printf("Chuoi sau khi doi ky tu: %s\n", str);
    return 0;
}