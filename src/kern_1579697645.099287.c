#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(650, 420, 20, "ones");
	float **A = create_two_dim_float(400, 100, "ones");
	float **B = create_two_dim_float(580, 40, "ones");

	for (int d = 0; d < 17; d++)
	  for (int c = 5; c < 40; c++)
	    for (int b = 5; b < 580; b++)
	      for (int a = 5; a < 580; a++)
	      {
	        
	       B[a][b]=B[a-5][b-5]-0.679*A[a][b];
	        
	       B[a][b]=B[a-5][b]/0.094;
	        
	       C[a][b][c]=0.359;
	       C[a+5][b+2][c+3]=0.871;
	      }

    return 0;
}