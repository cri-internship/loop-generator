#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(650, 420, "random");
	float *A = create_one_dim_float(620, "random");

	for (int c = 2; c < 418; c++)
	  for (int b = 5; b < 648; b++)
	    for (int a = 5; a < 648; a++)
	    {
	      
	      B[a][b]=B[a-5][b-1]-0.219;
	      
	      float var_a=B[a][b]/0.072;
	      float var_b=B[a+2][b+2]/0.32;
	      
	      float var_c=B[a][b]/0.949;
	      float var_d=B[a+2][b]*0.336;
	      
	      A[a]=B[a][b]+A[a];
	      B[a][b]=B[a-2][b-2]*A[a];
	    }

    return 0;
}