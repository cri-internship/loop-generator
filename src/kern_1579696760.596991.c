#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(260, 240, 60, "zeros");
	float *A = create_one_dim_float(350, "zeros");
	float **C = create_two_dim_float(560, 230, "zeros");
	float *E = create_one_dim_float(840, "zeros");
	float *B = create_one_dim_float(270, "zeros");

	for (int d = 1; d < 55; d++)
	  for (int c = 3; c < 237; c++)
	    for (int b = 0; b < 258; b++)
	      for (int a = 0; a < 258; a++)
	      {
	        
	       D[a][b][c]=D[a+2][b+3][c+5]-0.037;
	        
	       B[a]=B[a+2]*0.9-E[a]/C[a][b]+A[a];
	        
	       float var_a=D[a][b][c]/0.388;
	       float var_b=D[a][b-3][c-1]-0.582;
	      }

    return 0;
}