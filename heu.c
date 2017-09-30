#include <stdio.h>

void randomStarSpace();
void binaryMatrix();

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