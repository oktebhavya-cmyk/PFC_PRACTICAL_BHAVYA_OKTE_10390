#include <stdio.h>
void printTriangle(int n) {
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= i; j++) {
printf("*");
}
printf("\n");
}
}
int main() {
int height = 5;
printf("Right angle triangle of height %d:\n", height);
printTriangle(height);
return 0;
}