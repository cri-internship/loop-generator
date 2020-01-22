#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(70, "zeros");
	float ***B = create_three_dim_float(440, 450, 340, "zeros");
	float ***A = create_three_dim_float(130, 860, 990, "zeros");

	for (int d = 4; d < 340; d++)
	  for (int c = 3; c < 450; c++)
	    for (int b = 5; b < 65; b++)
	      for (int a = 5; a < 65; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-3][c-4]-0.45;
	        
	       C[a]=C[a-1]*A[a][b][c]-B[a][b][c];
	        
	       C[a]=C[a+1]-B[a][b][c]+A[a][b][c];
	        
	       float var_a=B[a][b][c]-0.646;
	       float var_b=B[a-2][b-2][c]-0.082;
	      }

    return 0;
}