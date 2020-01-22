#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(220, "zeros");
	float *C = create_one_dim_float(10, "zeros");
	float *A = create_one_dim_float(870, "zeros");
	float **B = create_two_dim_float(390, 800, "zeros");
	float **E = create_two_dim_float(180, 490, "zeros");

	for (int d = 5; d < 215; d++)
	  for (int c = 5; c < 215; c++)
	    for (int b = 5; b < 215; b++)
	      for (int a = 5; a < 215; a++)
	      {
	        
	       D[a]=D[a+5]+0.117;
	        
	       A[a]=D[a]-C[a]/E[a][b];
	       A[a+5]=B[a][b]*D[a]/B[a][b]+E[a][b];
	        
	       float var_a=A[a]*0.78;
	       float var_b=A[a-5]*0.122;
	      }

    return 0;
}