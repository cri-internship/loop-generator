#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(20, 90, "ones");

	for (int d = 0; d < 89; d++)
	  for (int c = 0; c < 18; c++)
	    for (int b = 0; b < 18; b++)
	      for (int a = 0; a < 18; a++)
	      {
	        
	       A[a][b]=A[a+1][b+1]*47;
	        
	       int var_a=A[a][b]+5;
	       int var_b=A[a+2][b]*20;
	      }

    return 0;
}