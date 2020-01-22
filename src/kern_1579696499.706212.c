#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(630, "ones");
	float *B = create_one_dim_float(250, "ones");
	float **C = create_two_dim_float(20, 800, "ones");
	float ***D = create_three_dim_float(830, 870, 610, "ones");

	for (int d = 0; d < 610; d++)
	  for (int c = 3; c < 800; c++)
	    for (int b = 4; b < 20; b++)
	      for (int a = 4; a < 20; a++)
	      {
	        
	       A[a]=A[a+4]+0.815;
	        
	       D[a][b][c]=A[a];
	       D[a-4][b-3][c]=0.397*B[a];
	        
	       C[a][b]=0.919;
	       C[a-1][b-3]=0.664;
	      }

    return 0;
}