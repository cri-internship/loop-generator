#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(390, "zeros");
	float **D = create_two_dim_float(430, 760, "zeros");
	float ***C = create_three_dim_float(870, 600, 40, "zeros");
	float *B = create_one_dim_float(140, "zeros");

	for (int d = 1; d < 759; d++)
	  for (int c = 2; c < 387; c++)
	    for (int b = 2; b < 387; b++)
	      for (int a = 2; a < 387; a++)
	      {
	        
	       D[a][b]=D[a+4][b+1]-0.971;
	        
	       float var_a=A[a]*0.702;
	       float var_b=A[a+3]-0.311;
	        
	       A[a]=D[a][b]+A[a]/B[a]-C[a][b][c];
	       B[a]=D[a-2][b-1]-0.014;
	      }

    return 0;
}