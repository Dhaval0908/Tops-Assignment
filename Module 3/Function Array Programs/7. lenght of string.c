//WAP Find out length of string without using inbuilt function

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    printf("Length of the string: %d\n", length);

    return 0;
}

