#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(20, 860, 950, "random");
	double **A = create_two_dim_double(50, 640, "random");

	for (int d = 4; d < 948; d++)
	  for (int c = 5; c < 639; c++)
	    for (int b = 3; b < 16; b++)
	      for (int a = 3; a < 16; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-5][c-4]+A[a][b];
	        
	       B[a][b][c]=B[a+4][b+3][c+2]/0.499;
	        
	       A[a][b]=A[a+1][b+1]-B[a][b][c];
	        
	       A[a][b]=0.827;
	      }

    return 0;
}