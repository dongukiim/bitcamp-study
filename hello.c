#include <stdio.h>

void print(int a) {
	printf("==> %d\n", a);
}

int main(int argc, char*argv[]) {
    printf("Hello!\n");
    print(100);
    print2(3.14f);
}
