#include <stdio.h>
int main() {
int n, i;
float sum = 0, average;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d integers:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
for (i = 0; i < n; i++) {
sum += arr[i];
}
average = sum / n;
printf("The average is: %.2f\n", average);
return 0;
}
