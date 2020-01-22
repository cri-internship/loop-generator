#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(170, "ones");
	float ***B = create_three_dim_float(280, 950, 900, "ones");

	for (int c = 4; c < 900; c++)
	  for (int b = 0; b < 950; b++)
	    for (int a = 5; a < 170; a++)
	    {
	      
	      A[a]=0.816;
	      A[a-5]=B[a][b][c];
	      
	      float var_a=A[a]/0.655;
	      float var_b=A[a-1]*0.173;
	      
	      float var_c=B[a][b][c]-0.09;
	      float var_d=B[a][b][c-4]-0.113;
	    }

    return 0;
}