#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(320, "random");
	float ***A = create_three_dim_float(150, 500, 440, "random");

	for (int d = 0; d < 438; d++)
	  for (int c = 4; c < 496; c++)
	    for (int b = 4; b < 145; b++)
	      for (int a = 4; a < 145; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-4][c]+0.598;
	        
	       A[a][b][c]=A[a][b][c]-B[a];
	       B[a]=A[a+3][b+4][c+2]+0.222;
	        
	       B[a]=A[a][b][c]+B[a];
	       B[a]=A[a+5][b+2][c+2]+0.372;
	        
	       A[a][b][c]=B[a]+A[a][b][c];
	       A[a][b][c]=B[a-1]+A[a][b][c];
	      }

    return 0;
}