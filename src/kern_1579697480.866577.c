#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(540, "zeros");
	float ***A = create_three_dim_float(720, 490, 900, "zeros");

	for (int b = 2; b < 490; b++)
	  for (int a = 5; a < 540; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b][a-1]+B[a];
	    
	     B[a]=A[a][b][a];
	     B[a]=A[a][b][a];
	    
	     float var_a=A[a][b][a]*0.888;
	     float var_b=A[a-4][b-2][a-1]*0.618;
	  }

    return 0;
}