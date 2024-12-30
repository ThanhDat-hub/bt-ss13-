#include <stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x = 123456789;
    int y = 987654321;
    int result = ucln(x, y);
    printf("uoc chung lon nhat cua %d và %d la: %d\n", x, y, result);

    return 0;
}

