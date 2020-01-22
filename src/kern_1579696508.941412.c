#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(20, "random");
	double **A = create_two_dim_double(680, 910, "random");
	double ***B = create_three_dim_double(610, 780, 100, "random");

	for (int d = 2; d < 910; d++)
	  for (int c = 0; c < 15; c++)
	    for (int b = 0; b < 15; b++)
	      for (int a = 0; a < 15; a++)
	      {
	        
	       A[a][b]=A[a][b-2]+0.608;
	        
	       A[a][b]=0.232;
	        
	       C[a]=C[a+5]+0.811;
	      }

    return 0;
}