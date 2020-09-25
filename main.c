#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int m, s;

	printf("input the second : ");
	scanf("%i", &i);
	
	m = i/60;
	s = i%60;
	
	printf(" the time is %m : %s \n", m, s);
    
	 
	return 0;
}
