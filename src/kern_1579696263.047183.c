#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(10, 860, 490, "random");
	double *B = create_one_dim_double(780, "random");
	double *C = create_one_dim_double(410, "random");

	for (int d = 5; d < 410; d++)
	  for (int c = 5; c < 410; c++)
	    for (int b = 5; b < 410; b++)
	      for (int a = 5; a < 410; a++)
	      {
	        
	       C[a]=C[a-4]-A[a][b][c];
	        
	       B[a]=B[a-5]-0.737;
	        
	       B[a]=B[a+1]/C[a]+C[a];
	      }

    return 0;
}