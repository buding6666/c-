#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int aee(int x)
	{   int a = 5;
		if (x == a)
          	return 1;
			
        else
            return 0;
	}
	
	printf ("请输入密码:\n");
	
	int c = 1;
	
   // int a = 2683513084;
    
    int b = 0;
    
    scanf ("%d", &b);
    
    int  n = aee(b) ;
    
   if (n)
    
       printf ("密码正确\n");
    
    else
    {
	    printf ("密码错误，请从新输入\n");
    
		while (c<=3)
    	{
		   // printf ("密码错误，请从新输入\n");
		    scanf ("%d", &b);
	
		    int n = aee(b);
		    
			if (n)
			
			{
			    printf ("密码正确\n");	 
            
			    break;
			}   
            else
                printf("密码错误，请从新输入\n");
                
            c++;
		}
	}
	return 0;
}
