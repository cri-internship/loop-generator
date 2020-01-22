#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(180, "zeros");
	float ***B = create_three_dim_float(620, 590, 750, "zeros");
	float *C = create_one_dim_float(80, "zeros");

	for (int d = 0; d < 750; d++)
	  for (int c = 0; c < 585; c++)
	    for (int b = 0; b < 75; b++)
	      for (int a = 0; a < 75; a++)
	      {
	        
	       C[a]=B[a][b][c];
	       B[a][b][c]=C[a]-0.717*B[a][b][c];
	        
	       C[a]=C[a+5]*0.425;
	        
	       B[a][b][c]=B[a+5][b][c]/C[a];
	        
	       C[a]=B[a][b][c]/A[a]*0.601;
	       A[a]=B[a+4][b+5][c]/C[a];
	      }

    return 0;
}