#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(430, "random");
	float **B = create_two_dim_float(220, 470, "random");
	float **A = create_two_dim_float(550, 600, "random");
	float **C = create_two_dim_float(310, 570, "random");

	for (int b = 5; b < 570; b++)
	  for (int a = 3; a < 310; a++)
	  {
	    
	     A[a][b]=A[a][b-3]*C[a][b]/D[a]+B[a][b];
	    
	     A[a][b]=A[a+3][b+4]-0.746;
	    
	     float var_a=C[a][b]*0.987;
	     float var_b=C[a-3][b-5]*0.58;
	  }

    return 0;
}