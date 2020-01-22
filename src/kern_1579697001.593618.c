#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(560, 200, "random");
	float **B = create_two_dim_float(540, 990, "random");

	for (int c = 5; c < 199; c++)
	  for (int b = 5; b < 535; b++)
	    for (int a = 5; a < 535; a++)
	    {
	      
	      B[a][b]=B[a-1][b-3]+A[a][b];
	      
	      B[a][b]=B[a-4][b-5]+0.841;
	      
	      B[a][b]=B[a+5][b]*0.948;
	      
	      A[a][b]=B[a][b];
	      A[a+4][b+1]=B[a][b];
	      
	      float var_a=B[a][b]*0.886;
	      float var_b=B[a-5][b-1]+0.825;
	    }

    return 0;
}