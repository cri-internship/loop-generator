#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(960, 380, "zeros");
	float *A = create_one_dim_float(910, "zeros");
	float **C = create_two_dim_float(490, 520, "zeros");
	float *B = create_one_dim_float(860, "zeros");
	float *E = create_one_dim_float(990, "zeros");

	for (int d = 0; d < 375; d++)
	  for (int c = 5; c < 486; c++)
	    for (int b = 5; b < 486; b++)
	      for (int a = 5; a < 486; a++)
	      {
	        
	       C[a][b]=C[a+2][b+2]/B[a]*A[a]-E[a];
	        
	       C[a][b]=0.68;
	        
	       E[a]=C[a][b];
	       E[a+5]=D[a][b]/B[a]+C[a][b]-D[a][b];
	        
	       E[a]=A[a]/B[a]+E[a]*C[a][b]-D[a][b];
	       B[a]=A[a-2]-B[a]+C[a][b]/D[a][b];
	        
	       D[a][b]=D[a][b]+E[a]*C[a][b];
	       A[a]=D[a+2][b+5]-E[a]+C[a][b]/A[a];
	        
	       float var_a=C[a][b]/0.97;
	       float var_b=C[a-5][b]/0.884;
	        
	       C[a][b]=A[a]/D[a][b]-E[a];
	       A[a]=A[a-5]*E[a]-C[a][b]+B[a]/D[a][b];
	      }

    return 0;
}