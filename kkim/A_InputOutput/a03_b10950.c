#include <stdio.h>

int        main(void) {
    int    i;
    int    a;
    int    b;
    
    i = 0;
    a = 0;
    b = 0;
    scanf("%d", &i);
    while (--i >= 0) {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
        a = 0;
        b = 0;
    }
}