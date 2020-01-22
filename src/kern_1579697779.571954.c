#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(550, 930, 100, "zeros");
	float *B = create_one_dim_float(300, "zeros");

	for (int d = 2; d < 96; d++)
	  for (int c = 1; c < 925; c++)
	    for (int b = 5; b < 298; b++)
	      for (int a = 5; a < 298; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-1][c-2]/0.73;
	        
	       B[a]=B[a-2]-A[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+4][c+4]-B[a];
	        
	       A[a][b][c]=B[a]/0.122;
	       B[a]=B[a+2]-A[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]+B[a];
	       B[a]=A[a+5][b+5][c]*0.778;
	      }

    return 0;
}