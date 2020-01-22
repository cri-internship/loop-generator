#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(800, 130, 950, "random");
	double **A = create_two_dim_double(990, 480, "random");

	for (int d = 0; d < 950; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 800; b++)
	      for (int a = 5; a < 800; a++)
	      {
	        
	       A[a][b]=A[a+4][b+5]/0.673;
	        
	       A[a][b]=A[a][b+1]*B[a][b][c];
	        
	       B[a][b][c]=0.722;
	       B[a-5][b-5][c]=0.663;
	      }

    return 0;
}