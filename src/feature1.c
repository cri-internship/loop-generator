#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(50, 50);
	float *A = create_one_dim_float(100);
	float ***C = create_three_dim_float(50, 50, 50);

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 0; a < 50; a++)
	    {
	      
	      
	      C[a][b][c]=0.71372;
	      
	      float  var_a=C[a][b][c]*0.85023;
	      
	      
	float var_b=C[a][b][c]*0.61561;
	      
	C[a][b][c]=0.90687;
	      ;
	      ;
	    }

    return 0;
}