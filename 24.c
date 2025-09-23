#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    int i, j, k;
    int remove;

    for (i = j = 0; s1[i] != '\0'; i++) {
        remove = 0; // assume keep
        for (k = 0; s2[k] != '\0'; k++) {
            if (s1[i] == s2[k]) {
                remove = 1; // found in s2, mark for deletion
                break;
            }
        }
        if (!remove) {
            s1[j++] = s1[i];  // copy only if not found in s2
        }
    }
    s1[j] = '\0'; // null terminate
}
int main() {
    char str1[] = "HELLO WORLD";
    char str2[] = "LO";

    squeeze(str1, str2);

    printf("%s\n", str1);  // prints "HE WRD"
    return 0;
}
