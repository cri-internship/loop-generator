#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(120, 880, "zeros");
	float *B = create_one_dim_float(680, "zeros");

	for (int c = 2; c < 876; c++)
	  for (int b = 5; b < 120; b++)
	    for (int a = 5; a < 120; a++)
	    {
	      
	      A[a][b]=A[a-1][b]*B[a];
	      
	      A[a][b]=A[a][b+2]*0.003;
	      
	      float var_a=B[a]*0.683;
	      B[a]=0.475;
	      
	      B[a]=0.936;
	      
	      B[a]=B[a]-A[a][b];
	      A[a][b]=B[a+3]-0.42;
	    }

    return 0;
}