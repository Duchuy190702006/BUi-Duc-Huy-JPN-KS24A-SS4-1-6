#include <stdio.h>

int main() {
    int number;

   
    printf("nhap vao so nguyen: ");
    scanf("%d", &number);

  
    if (number % 2 == 0) {
        printf("so %d so chan.\n", number);
    } else {
        printf("so %d so le.\n", number);
    }

    return 0;
}

