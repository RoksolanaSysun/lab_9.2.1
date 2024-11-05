#include <stdio.h>
#include <conio.h>
#include <math.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y)) // макрос визначення мінімуму з двох чисел
#define MAX(y, z) ((y) > (z) ? (y) : (z)) // макрос визначення максимуму з двох чисел
#define PRINTI(w) puts("control output"); printf(#w "=%d\n", w)
#define PRINTR(w) puts("result:"); printf(#w "=%f\n", (float)w)

void main() {
    puts("Lab 13.2. Using macros and preprocessing directive");
    int x, y, z;
    float w;
    char ch;

    do {
        puts("Input values for x, y, and z:");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        scanf("%d", &z);
        PRINTI(z);

        if (z > 1 && z < 3) {
            // Використання мінімуму
            w = MIN(fabs(x) + fabs(y) + fabs(z), pow(x, 3));
        }
        else if (z > 3) {
            // Використання максимуму
            w = MAX(2 * x + y, pow(2 * y - z, 2));
        }
        else {
            puts("Condition for z is not met.");
            w = 0;
        }

        PRINTR(w); // Виведення результату
        puts("Repeat? y/n");
        ch = getch();
    } while (ch == 'y');
}
