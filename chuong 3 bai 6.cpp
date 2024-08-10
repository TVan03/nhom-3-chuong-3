#include <stdio.h>
#include <string.h>

void catTen(char hoTen[], char hoLot[], char ten[]) {
    int n = strlen(hoTen);
    int lastSpace = -1;
    for (int i = 0; i < n; i++) {
        if (hoTen[i] == ' ') {
            lastSpace = i;
        }
    }

    strncpy(hoLot, hoTen, lastSpace);
    hoLot[lastSpace] = '\0';
    strcpy(ten, hoTen + lastSpace + 1);
}

int main6() {
    char hoTen[100], hoLot[100], ten[50];
    printf("Nhap ho ten: ");
    scanf("%[^\n]%*c", hoTen);
    catTen(hoTen, hoLot, ten);
    printf("Ho lot: %s\n", hoLot);
    printf("Ten: %s\n", ten);
    return 0;
}
