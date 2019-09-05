#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(50, 50, 50);
	float *A = create_one_dim_float(100);
	float **B = create_two_dim_float(50, 50);

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 47; b++)
	    for (int a = 2; a < 50; a++)
	    {
	      
	      C[a][b][c]=0.30497;
	      float var_a=C[a][b][c]/0.93061;
	      
	      A[a]=A[a-1]/0.60126;
	      
	      float var_b=C[a][b][c]*0.52151;
	      C[a][b][c]=0.50086;
	      
	      A[a]=A[a+1]*0.52077;
	      
	      C[a][b][c]=0.0801;
	      C[a][b][c]=0.30819;
	      
	      B[a][b]=0.59751;
	      B[a][b]=0.21043;
	      
	      float var_c=C[a][b][c]-0.66422;
	      float var_d=C[a][b][c]-0.3673;
	      
	      float var_e=A[a-1]/0.14139;
	      float var_f=A[a-1]+0.55355;
	    }

    return 0;
}