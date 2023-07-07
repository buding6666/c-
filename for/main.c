#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf ("游戏规则：回答下面5到问题，答错一题则从新开始答题，你一共有2次答题机会，全部答对可获得神秘大奖\n");
	
	printf ("问题一：1+1=？\n");
	
	int a = 0;
	
	scanf ("%d", &a );
	
	if (1==a)
	
	  {
	    printf ("回答正确，请回答下一题\n");
	   
	    printf ("太阳从哪边升起\n") ;
	   
	    int b = 0;
	   
	    scanf ("%d", &b) ;
	   
	    if (2==b)
	    
	       printf ("回答正确\n");
	    
	    else
	       
	       printf ("回答错误\n");
	   
	   
	   
      }     
	   
    else
      
      {
	    printf ("回答错误，请从新回答\n");
	
		printf ("问题一：1+1=？\n");
	
	    int a = 0;
	
	    scanf ("%d", &a );
	
	    if (1==a)
	
	      printf ("回答正确，请回答下一题\n");
	      
	    else 
	
	    printf ("回答错误，游戏结束\n");
	
	
	
      }
	
	return 0;
}
