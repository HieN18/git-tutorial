#include <stdio.h>

#include "espl_lib.h"

int main() 
{
	char ch;
	while (1){
		unsigned int i;  
        printf("Please enter a number: ");
        scanf("%d", &i);
        printf("The number in string: %s\n",num_to_words(i));
        printf("Enter any key to continue or 'q' to exit: ");
		scanf(" %c", &ch);
        if(ch=='Q' || ch=='q'){
            break;
        }
	}
	return 0;
}
