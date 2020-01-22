#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(540, "zeros");
	float ***A = create_three_dim_float(800, 820, 110, "zeros");
	float *B = create_one_dim_float(750, "zeros");
	float *C = create_one_dim_float(850, "zeros");
	float **D = create_two_dim_float(40, 540, "zeros");

	for (int d = 5; d < 105; d++)
	  for (int c = 0; c < 535; c++)
	    for (int b = 2; b < 36; b++)
	      for (int a = 2; a < 36; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b][c-1]-B[a]+0.324*C[a];
	        
	       D[a][b]=D[a+4][b+5]*0.607;
	        
	       B[a]=B[a+2]+0.446;
	        
	       A[a][b][c]=A[a+4][b+5][c+5]+0.736/B[a];
	      }

    return 0;
}