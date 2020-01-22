#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(450, 970, 790, "ones");
	float *D = create_one_dim_float(910, "ones");
	float ***C = create_three_dim_float(1000, 810, 450, "ones");
	float *A = create_one_dim_float(180, "ones");

	for (int b = 4; b < 810; b++)
	  for (int a = 5; a < 445; a++)
	  {
	    
	     B[a][b][a]=A[a];
	     B[a][b+5][a+5]=D[a]+C[a][b][a];
	    
	     B[a][b][a]=D[a]-C[a][b][a]/A[a];
	    
	     float var_a=C[a][b][a]+0.551;
	     float var_b=C[a-5][b-1][a]/0.114;
	  }

    return 0;
}