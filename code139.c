// Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {SUCCESS = 100, FAILURE = 200, TIMEOUT = 300};

int main() {
    enum Status s;

    for (s = SUCCESS; s <= TIMEOUT; s += 100) {
        switch(s) {
            case SUCCESS: printf("SUCCESS = %d\n", s); break;
            case FAILURE: printf("FAILURE = %d\n", s); break;
            case TIMEOUT: printf("TIMEOUT = %d\n", s); break;
        }
    }

    return 0;
}