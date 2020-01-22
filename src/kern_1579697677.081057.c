#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(180, "ones");
	float **A = create_two_dim_float(550, 100, "ones");

	for (int c = 5; c < 100; c++)
	  for (int b = 5; b < 175; b++)
	    for (int a = 5; a < 175; a++)
	    {
	      
	      B[a]=B[a-5]*0.965;
	      
	      B[a]=B[a+1]+A[a][b];
	      
	      B[a]=B[a+5]/A[a][b];
	      
	      A[a][b]=A[a][b]+B[a];
	      A[a][b]=B[a];
	      
	      float var_a=A[a][b]+0.644;
	      float var_b=A[a][b-1]/0.922;
	    }

    return 0;
}