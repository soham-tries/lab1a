#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main() {
char str[MAX_LENGTH], reversed[MAX_LENGTH];
int length, i;
printf("Enter a string: ");
fgets(str, MAX_LENGTH, stdin);
length = strlen(str) - 1;
str[length] = '\0';
for (i = 0; i < length; i++) {
reversed[i] = str[length - 1 - i];
}
reversed[length] = '\0';
printf("Reversed string: %s\n", reversed);
return 0;
}
