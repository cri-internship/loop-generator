#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(20, "ones");
	float **D = create_two_dim_float(50, 670, "ones");
	float ***A = create_three_dim_float(1000, 820, 290, "ones");
	float ***C = create_three_dim_float(960, 780, 630, "ones");

	for (int d = 0; d < 625; d++)
	  for (int c = 3; c < 670; c++)
	    for (int b = 1; b < 20; b++)
	      for (int a = 1; a < 20; a++)
	      {
	        
	       C[a][b][c]=C[a+3][b+2][c+5]*B[a];
	        
	       C[a][b][c]=0.909;
	        
	       float var_a=B[a]*0.236;
	        
	       B[a]=D[a][b]+A[a][b][c]-C[a][b][c];
	       C[a][b][c]=D[a-1][b-3]*B[a]/A[a][b][c];
	      }

    return 0;
}