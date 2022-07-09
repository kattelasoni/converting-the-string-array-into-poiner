//progam to convert the arrays to pointer

#include <stdio.h>
 
const int MAX = 4;
 
int main () {
	int i = 0;
	char  *names[4][50] ;
       for (i = 0; i <MAX; i++)
        scanf("%s", names[i]);
   
   //int i = 0;
	 for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
   
   return 0;
}
