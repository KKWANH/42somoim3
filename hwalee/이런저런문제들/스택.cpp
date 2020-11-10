#include <iostream>
#include <stack>
#include <string>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAX_SIZE 10000
using namespace std;

typedef struct _stack {
	int arr[MAX_SIZE];
	int top;
}Stack;

void	init(Stack* sp)
{
	sp->top = -1;
}

int		empty(Stack * sp)
{
	if (sp->top == -1) return (TRUE);
	return (FALSE);
}

int		is_full(Stack* sp)
{
	if (sp->top >= MAX_SIZE) return (TRUE);
	return (FALSE);
}

void	push(Stack* sp, int n)
{
	if (is_full(sp) == 1) return;
	sp->arr[++(sp->top)] = n;
}

void	pop(Stack* sp)
{
	if (empty(sp) == -1) return;
	int n;
	if (sp->top == -1)
	{
		printf("%d\n", -1);
		return ;
	}
	n = sp->arr[(sp->top)--];
	printf("%d\n", n);
}

void	size(Stack* sp)
{
	printf("%d\n", sp->top + 1);
}

void	top(Stack* sp)
{
	if (sp->top == -1)
	{
		printf("%d\n", -1);
		return;
	}
	printf("%d\n", sp->arr[sp->top]);
}

int		main()
{
	int n;
	Stack st;
	char str[10];

	scanf("%d", &n);
	init(&st);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &str);
		if (strcmp(str, "push") == 0)
		{
			int x;
			scanf("%d", &x);
			push(&st, x);
		}
		else if (strcmp(str, "pop") == 0)
		{
			pop(&st);
		}
		else if (strcmp(str, "size") == 0)
		{
			size(&st);
		}
		else if (strcmp(str, "empty") == 0)
		{
			printf("%d\n", empty(&st));
		}
		else if (strcmp(str, "top") == 0)
		{
			top(&st);
		}
	}
}
