#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(250, 790, "random");
	int **B = create_two_dim_int(170, 290, "random");

	for (int d = 4; d < 286; d++)
	  for (int c = 5; c < 170; c++)
	    for (int b = 5; b < 170; b++)
	      for (int a = 5; a < 170; a++)
	      {
	        
	       B[a][b]=B[a-5][b-4]-41;
	        
	       A[a][b]=A[a+2][b+3]/14;
	        
	       B[a][b]=20;
	        
	       int var_a=A[a][b]/20;
	       int var_b=A[a+1][b+2]-8;
	      }

    return 0;
}