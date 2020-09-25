#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year;
	int result;
	
	printf("년도를 입력하세요: ");
	scanf("%i", &year);
	
	
	result = ((year%4 == 0) && (year%100 != 0)) || ( year%400 == 0);
	
	printf(" %i 년도는 윤년일까,,? : %i \n", year, result); 
	return 0;
}
