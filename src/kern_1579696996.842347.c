#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(460, 620, "zeros");

	for (int d = 3; d < 616; d++)
	  for (int c = 2; c < 456; c++)
	    for (int b = 2; b < 456; b++)
	      for (int a = 2; a < 456; a++)
	      {
	        
	       A[a][b]=18;
	       A[a+4][b+4]=6;
	        
	       A[a][b]=33;
	        
	       int var_a=A[a][b]/24;
	       int var_b=A[a][b-1]*35;
	      }

    return 0;
}