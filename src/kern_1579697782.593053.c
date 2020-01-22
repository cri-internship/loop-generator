#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(280, "random");
	float **B = create_two_dim_float(780, 910, "random");
	float *A = create_one_dim_float(410, "random");
	float **D = create_two_dim_float(340, 160, "random");

	for (int c = 1; c < 158; c++)
	  for (int b = 5; b < 280; b++)
	    for (int a = 5; a < 280; a++)
	    {
	      
	      A[a]=A[a-2]+0.29;
	      
	      D[a][b]=D[a+3][b+2]/0.403;
	      
	      float var_a=C[a]+0.883;
	      float var_b=C[a-4]+0.8;
	      
	      float var_c=B[a][b]+0.493;
	      float var_d=B[a-5][b-1]-0.81;
	      
	      B[a][b]=A[a]*B[a][b];
	      A[a]=A[a-1]*C[a]-D[a][b]/D[a][b];
	      
	      float var_e=C[a]-0.371;
	      float var_f=C[a-2]*0.409;
	    }

    return 0;
}