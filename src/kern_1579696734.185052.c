#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(400, "zeros");
	float ***A = create_three_dim_float(950, 1000, 910, "zeros");

	for (int d = 0; d < 907; d++)
	  for (int c = 0; c < 995; c++)
	    for (int b = 4; b < 396; b++)
	      for (int a = 4; a < 396; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+5][c+3]*0.395;
	        
	       B[a]=B[a+4]+A[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+3][c+3]-0.164;
	        
	       B[a]=A[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]*0.647;
	       B[a]=A[a-4][b][c]/B[a];
	        
	       A[a][b][c]=B[a]*0.934;
	      }

    return 0;
}