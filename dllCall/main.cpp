#include <stdio.h>
#include "..\dllTest\dll.h"
#pragma comment(lib, "..\\Debug\\dllTest.lib")

int main() {
    printf("2 + 3 = %d\n", add(2, 3));

    dllGlobalVar = 0;
    printf("dllGlobalVar = %d\n", dllGlobalVar);

    getchar();
    return 0;
}
