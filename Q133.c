
//Create an enum for months and print how many days each month has.

#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    for (int m = JAN; m <= DEC; m++) {
        int days;

        if (m == APR || m == JUN || m == SEP || m == NOV)
            days = 30;
        else if (m == FEB)
            days = 28;
        else
            days = 31;

        printf("Month %d has %d days\n", m, days);
    }

    return 0;
}
