#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(590, "zeros");
	float ***B = create_three_dim_float(520, 700, 30, "zeros");
	float **C = create_two_dim_float(30, 470, "zeros");
	float *A = create_one_dim_float(190, "zeros");
	float ***D = create_three_dim_float(150, 700, 980, "zeros");

	for (int d = 5; d < 30; d++)
	  for (int c = 0; c < 700; c++)
	    for (int b = 5; b < 190; b++)
	      for (int a = 5; a < 190; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b][c-5]/0.211;
	        
	       B[a][b][c]=B[a-5][b][c]-D[a][b][c]/A[a]*C[a][b];
	        
	       float var_a=A[a]/0.857;
	       A[a]=0.099;
	      }

    return 0;
}