#include <unistd.h>
#include <stdio.h>

int main(){
	int a = 0;

	a = sysconf(_SC_OPEN_MAX);
	printf("%d\n", a);
	return 0;
}
