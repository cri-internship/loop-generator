#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(220, "random");
	float **C = create_two_dim_float(800, 490, "random");
	float **B = create_two_dim_float(360, 190, "random");

	for (int c = 0; c < 186; c++)
	  for (int b = 5; b < 220; b++)
	    for (int a = 5; a < 220; a++)
	    {
	      
	      A[a]=A[a-1]/0.524;
	      
	      A[a]=A[a-4]*0.727;
	      
	      C[a][b]=C[a-2][b]/B[a][b]*A[a];
	      
	      B[a][b]=B[a+4][b+4]/0.916;
	      
	      float var_a=A[a]/0.269;
	      float var_b=A[a]-0.677;
	      
	      float var_c=B[a][b]-0.01;
	      float var_d=B[a][b+1]/0.891;
	      
	      float var_e=C[a][b]-0.409;
	      float var_f=C[a-5][b]*0.432;
	    }

    return 0;
}