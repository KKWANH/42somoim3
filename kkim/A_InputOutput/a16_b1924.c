#include	<stdio.h>

int			main(void)
{   
    int		idx;
	int		jdx;
	int		ttl;
	int 	mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	idx = 0;
	jdx = 0;
    ttl = 0;
    scanf("%d %d", &idx, &jdx);
    for (int i=1; i<idx; i++)
		ttl += mon[i-1];
    ttl += jdx;
    switch(ttl % 7){
        case 0 : printf("SUN\n"); break;
        case 1 : printf("MON\n"); break;
        case 2 : printf("TUE\n"); break;
        case 3 : printf("WED\n"); break;
        case 4 : printf("THU\n"); break;
        case 5 : printf("FRI\n"); break;
        case 6 : printf("SAT\n"); break;
    }
    return (0);
}