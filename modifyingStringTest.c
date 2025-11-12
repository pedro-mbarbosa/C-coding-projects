#include <stdio.h>
#include <string.h>

int main() {
    char str2[100] = "Hello, World!";
    char* addr = strstr(str2, "World");

    if (addr != NULL) {
        addr[0] = '\0';  // cut the string before "World"
        printf("%s\n", str2);
    }
}
