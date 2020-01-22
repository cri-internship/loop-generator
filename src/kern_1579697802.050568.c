#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(110, 930, "random");
	float ***A = create_three_dim_float(290, 750, 320, "random");
	float **C = create_two_dim_float(960, 480, "random");

	for (int d = 0; d < 316; d++)
	  for (int c = 1; c < 480; c++)
	    for (int b = 5; b < 110; b++)
	      for (int a = 5; a < 110; a++)
	      {
	        
	       C[a][b]=C[a-5][b]+0.884;
	        
	       A[a][b][c]=A[a+4][b+5][c+4]-B[a][b]/C[a][b];
	        
	       B[a][b]=A[a][b][c]*C[a][b];
	       B[a-5][b-1]=C[a][b];
	        
	       B[a][b]=A[a][b][c]*0.17+C[a][b];
	       A[a][b][c]=A[a+4][b+2][c]/B[a][b]+C[a][b];
	      }

    return 0;
}