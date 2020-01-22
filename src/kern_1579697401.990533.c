#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(940, 940, 310, "ones");
	double *A = create_one_dim_double(200, "ones");

	for (int d = 5; d < 200; d++)
	  for (int c = 5; c < 200; c++)
	    for (int b = 5; b < 200; b++)
	      for (int a = 5; a < 200; a++)
	      {
	        
	       A[a]=A[a-3]*0.587;
	        
	       A[a]=0.086;
	        
	       B[a][b][c]=A[a]+B[a][b][c];
	       A[a]=A[a-5]/B[a][b][c];
	      }

    return 0;
}