#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(490, 460, 720, "random");
	int *A = create_one_dim_int(860, "random");

	for (int b = 5; b < 460; b++)
	  for (int a = 4; a < 490; a++)
	  {
	    
	     A[a]=6;
	     A[a+3]=47;
	    
	     B[a][b][a]=A[a];
	     B[a-4][b-3][a]=A[a];
	    
	     B[a][b][a]=35;
	    
	     int var_a=B[a][b][a]/43;
	     int var_b=B[a-1][b-5][a-4]-15;
	  }

    return 0;
}