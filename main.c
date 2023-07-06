#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf ("请回答以下问题:\n");
	
	printf ("求函数f（x）=3x-3的解：\n") ;
	
	int a = 0;
	
	scanf ("%d", &a);
	
	if (1 ==a)
	  
	   printf ("回答正确\n");
	   
	else   
	
	while (a != 1)
	{   
	    printf("回答错误，请从新回答:\n") ;
	    
	    int a = 0;
	
	    scanf ("%d", &a); 
		
		if (1 == a)
		{
		    printf ("回答正确\n");
			
			break;	
		
		} 
		
	}
	
	return 0;
}
