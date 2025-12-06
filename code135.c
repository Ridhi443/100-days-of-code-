// Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Numbers {TEN = 10, ELEVEN, TWELVE, THIRTEEN, FOURTEEN};

int main() {
    enum Numbers n;
    for (n = TEN; n <= FOURTEEN; n++) {
        printf("%d\n", n);
    }
    return 0;
}