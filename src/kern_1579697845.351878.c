#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(410, "random");
	float *A = create_one_dim_float(580, "random");
	float ***B = create_three_dim_float(980, 490, 840, "random");

	for (int c = 3; c < 405; c++)
	  for (int b = 3; b < 405; b++)
	    for (int a = 3; a < 405; a++)
	    {
	      
	      A[a]=A[a-3]/B[a][b][c]*C[a];
	      
	      A[a]=A[a+3]+C[a]/B[a][b][c];
	      
	      float var_a=C[a]/0.119;
	      float var_b=C[a-3]*0.243;
	      
	      float var_c=C[a]+0.985;
	      float var_d=C[a+5]*0.059;
	    }

    return 0;
}