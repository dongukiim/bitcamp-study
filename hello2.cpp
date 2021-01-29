#include <stdio.h>

void print(int a) {
	printf("==> %d\n", a);
}

void print(float f) {
	printf("==> %d\n", f);
}
int main(int argc, char*argv[]) {
    printf("Hello!\n");
    print(100);
}
