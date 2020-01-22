#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(350, "zeros");
	float **C = create_two_dim_float(700, 230, "zeros");
	float *A = create_one_dim_float(420, "zeros");
	float **D = create_two_dim_float(90, 940, "zeros");
	float *E = create_one_dim_float(760, "zeros");

	for (int d = 2; d < 940; d++)
	  for (int c = 3; c < 90; c++)
	    for (int b = 3; b < 90; b++)
	      for (int a = 3; a < 90; a++)
	      {
	        
	       D[a][b]=D[a-3][b-2]*0.297;
	        
	       B[a]=B[a+5]-0.818;
	        
	       E[a]=E[a]-B[a]/D[a][b]+A[a]*C[a][b];
	       E[a]=A[a]-B[a]/C[a][b];
	        
	       B[a]=0.836;
	        
	       D[a][b]=E[a]-A[a]/0.185;
	       C[a][b]=E[a-1]*A[a]+B[a];
	        
	       float var_a=E[a]/0.277;
	       float var_b=E[a-3]+0.187;
	      }

    return 0;
}