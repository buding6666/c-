#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add (int x, int y)
{
	return 9;
	
}

int main(int argc, char *argv[]) {
	
	printf ("输入1~10\n");
	
	int c = add(6, 3);
	
	int a = 0;
	
	int b = 0;
	
	scanf ("%d %d" , &a, &b);
	
	switch (a)
    {
    	case 1 :
    		a++;
    	case 2 :
    		b--;
    	case 3 :
    		switch (b)
    		{
    			case 4:
    				b = c++;
    			default :
				    a++;
				    b++;
    				break;
				 
			}
    	
    	    break;
	 } 
    printf ("%d %d\n",a ,b);	
	
	
	
	return 0;
}
