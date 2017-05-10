#include <stdio.h>
#include <math.h>

int main(){
	int i;
	for(i = 0; ; i++){
		int r = rand() % 2;
		printf("%c", r == 1 ? '*' : ' ');
	}
}
