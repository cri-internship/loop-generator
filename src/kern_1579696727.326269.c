#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(210, 90, "random");
	int *B = create_one_dim_int(650, "random");

	for (int c = 3; c < 87; c++)
	  for (int b = 5; b < 208; b++)
	    for (int a = 5; a < 208; a++)
	    {
	      
	      A[a][b]=17;
	      A[a+2][b+3]=24;
	      
	      A[a][b]=41;
	      
	      B[a]=44;
	      B[a]=41;
	      
	      int var_a=B[a]*29;
	      int var_b=B[a]/3;
	      
	      int var_c=B[a]/14;
	      int var_d=B[a+3]+33;
	    }

    return 0;
}