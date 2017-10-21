#include <stdio.h>
#include <stdlib.h>

void randomStarSpace();
void binaryMatrix();
void randomChars();

int main()
{
    int option;
	printf("Chaos 1. * and space2. Binary Matrix");
	scanf("%i", &option);
    int i;
    switch(option){
        case 1 : randomStarSpace();
            break;
		case 2 : binaryMatrix();
			break;
		case 2 : randomChars();
			break;
		default : printf("Invalid option");
    }
}

void randomStarSpace(){
    int i;
	for(i = 0; ; i++){
		int r = rand() % 2;
		printf("%c", r == 1 ? '*' : ' ');
	}
}

void binaryMatrix(){
    int i;
	for(i = 0; ; i++){
		int r = rand() % 2;
		printf("%c", r == 0 ? '0' : '1');
	}
}

void randomChars(){
    int i;
	for(i = 0; ; i++){
		printf("%c", rand());
	}
}
