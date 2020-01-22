#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(740, 520, "ones");
	float *B = create_one_dim_float(250, "ones");
	float **C = create_two_dim_float(300, 80, "ones");

	for (int c = 2; c < 80; c++)
	  for (int b = 4; b < 250; b++)
	    for (int a = 4; a < 250; a++)
	    {
	      
	      B[a]=B[a-3]+C[a][b];
	      
	      B[a]=B[a-1]+0.174;
	      
	      C[a][b]=0.306;
	      C[a][b-1]=0.926;
	      
	      B[a]=B[a]+A[a][b];
	      A[a][b]=B[a-4]+C[a][b];
	      
	      float var_a=C[a][b]/0.014;
	      float var_b=C[a-3][b-2]-0.703;
	    }

    return 0;
}