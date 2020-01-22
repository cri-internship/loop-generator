#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(110, 640, "ones");
	float **A = create_two_dim_float(220, 380, "ones");
	float ***C = create_three_dim_float(400, 240, 620, "ones");

	for (int d = 2; d < 620; d++)
	  for (int c = 5; c < 240; c++)
	    for (int b = 2; b < 110; b++)
	      for (int a = 2; a < 110; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c-2]/0.571;
	        
	       B[a][b]=B[a-1][b-4]+0.674;
	        
	       A[a][b]=A[a+2][b+5]*C[a][b][c];
	      }

    return 0;
}