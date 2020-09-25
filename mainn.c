#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   int sec;
    
   printf("초를 입력하세요: ");
   scanf("%i", &sec);
   
   printf("%i 초는 %i : %i : %i ", sec, sec/3600, (sec%3600)/60, ((sec%3600)%60) );
   
	return 0;
}
