#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(650, 220, "random");
	float *D = create_one_dim_float(10, "random");
	float **C = create_two_dim_float(490, 920, "random");
	float **B = create_two_dim_float(770, 190, "random");

	for (int c = 5; c < 190; c++)
	  for (int b = 5; b < 10; b++)
	    for (int a = 5; a < 10; a++)
	    {
	      
	      B[a][b]=B[a-5][b-4]+D[a]-C[a][b];
	      
	      B[a][b]=B[a-3][b-5]+A[a][b];
	      
	      A[a][b]=A[a-2][b-4]+0.213;
	      
	      D[a]=D[a-3]*0.726;
	      
	      float var_a=A[a][b]-0.246;
	      float var_b=A[a-4][b-3]-0.249;
	      
	      float var_c=C[a][b]*0.196;
	      float var_d=C[a-1][b-3]+0.468;
	    }

    return 0;
}