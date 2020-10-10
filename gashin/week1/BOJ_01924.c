#include <stdio.h>

char	what_day(int month, int date)
{
	int		day, sum_date = 0;
	int		dates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char	days[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	
	if (1 <= month && month <= 12 && 1 <= date && date <= dates[month - 1])
	{
		for (int i = 1; i < month; i++) sum_date += dates[i - 1];
		sum_date += date;
		day = sum_date % 7;
		printf("%s", days[day]);
	}
	return 0;
}

int	main()
{
	int	month, date;
	
	scanf("%d %d", &month, &date);
	what_day(month, date);
	return 0;
}