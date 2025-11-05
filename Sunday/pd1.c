#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char seq[1000];
	int len;
	


	scanf("%s", seq);
	len=strlen( seq );
	printf("The length was :%d \n", len);
	if ( len < 3 )
		{ printf("Go away \n");
		exit(1)
		}


		if(seq [len-3]  == 'T' && seq[1] == 'A' && seq [2] == 'A')
		{ 
 			printf("Last triplet is TAA \n");
		}
		else 
		{ printf ("Last triplet is not TAA \n");
		}
	



}
