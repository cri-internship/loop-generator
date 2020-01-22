#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(90, 400, "ones");
	int ***C = create_three_dim_int(970, 290, 950, "ones");
	int *B = create_one_dim_int(360, "ones");
	int *D = create_one_dim_int(100, "ones");

	for (int d = 0; d < 400; d++)
	  for (int c = 0; c < 89; c++)
	    for (int b = 0; b < 89; b++)
	      for (int a = 0; a < 89; a++)
	      {
	        
	       A[a][b]=A[a+1][b]+35;
	        
	       int var_a=D[a]+49;
	       int var_b=D[a+5]-9;
	      }

    return 0;
}