#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(540, "zeros");
	float ***C = create_three_dim_float(50, 160, 340, "zeros");
	float **A = create_two_dim_float(490, 790, "zeros");
	float *D = create_one_dim_float(210, "zeros");

	for (int d = 5; d < 340; d++)
	  for (int c = 4; c < 160; c++)
	    for (int b = 5; b < 50; b++)
	      for (int a = 5; a < 50; a++)
	      {
	        
	       C[a][b][c]=C[a][b-4][c-5]-0.842;
	        
	       A[a][b]=D[a]-0.637/C[a][b][c];
	       B[a]=D[a+4]+A[a][b]*A[a][b]-C[a][b][c];
	        
	       float var_a=A[a][b]/0.352;
	       float var_b=A[a-5][b-1]/0.679;
	      }

    return 0;
}