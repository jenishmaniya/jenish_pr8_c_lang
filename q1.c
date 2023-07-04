#include <stdio.h>

void main() {

    char str[100];
    char *ptr;
    int count=0;

    printf("Enter any string: ");
    scanf("%s",&str);
	ptr=str;


    while (*ptr!='\0') {
        count++;
        ptr++;
    }
	printf("The length of the string is:%d",count);
}
