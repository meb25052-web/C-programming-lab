#include<stdio.h>
int main()
{
	char ch;
	printf("Alphabet from A to Z:");
	for(ch='A'; ch<='Z'; ch++){
		printf("%c \n",ch);
		switch(ch){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("%c is a Vowel \n", ch);
				break;
				default:
					printf("%c is a consonant \n", ch);
					
		}
	}
	return 0;
	
}
