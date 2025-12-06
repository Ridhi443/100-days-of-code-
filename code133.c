// Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Months {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

int main() {
    enum Months m;
    for (m = JANUARY; m <= DECEMBER; m++) {
        printf("%d: ", m);
        switch(m) {
            case JANUARY: printf("JANUARY - 31 days"); break;
            case FEBRUARY: printf("FEBRUARY - 28/29 days"); break;
            case MARCH: printf("MARCH - 31 days"); break;
            case APRIL: printf("APRIL - 30 days"); break;
            case MAY: printf("MAY - 31 days"); break;
            case JUNE: printf("JUNE - 30 days"); break;
            case JULY: printf("JULY - 31 days"); break;
            case AUGUST: printf("AUGUST - 31 days"); break;
            case SEPTEMBER: printf("SEPTEMBER - 30 days"); break;
            case OCTOBER: printf("OCTOBER - 31 days"); break;
            case NOVEMBER: printf("NOVEMBER - 30 days"); break;
            case DECEMBER: printf("DECEMBER - 31 days"); break;
        }
        printf("\n");
    }
    return 0;
}