#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(770, 390, "zeros");
	float *B = create_one_dim_float(40, "zeros");
	float ***A = create_three_dim_float(20, 130, 320, "zeros");
	float **D = create_two_dim_float(510, 70, "zeros");

	for (int d = 5; d < 320; d++)
	  for (int c = 2; c < 70; c++)
	    for (int b = 3; b < 20; b++)
	      for (int a = 3; a < 20; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-2][c-5]+0.952*B[a];
	        
	       D[a][b]=A[a][b][c]*C[a][b];
	       D[a-1][b-1]=C[a][b]+B[a];
	        
	       C[a][b]=A[a][b][c]*0.263;
	       C[a+5][b+2]=A[a][b][c];
	        
	       float var_a=D[a][b]+0.039;
	       float var_b=D[a-3][b-2]/0.855;
	      }

    return 0;
}