/*
* Name: Damar Fajar Tanjung
* NPM: 1506757415
* Class: OS C
* Comment: Excercise
*/
#define LOOP 4
#include <stdio.h>

void main() {
	int input = 5;
	int ii;
	int result = 0;
	for(ii = 0; ii < LOOP; ii++ ){
		result += input;
	}
	printf("%d times %d equals %d\n",input,LOOP,result);
}

