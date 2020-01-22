#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(50, 310, 910, "random");
	double ***C = create_three_dim_double(1000, 460, 710, "random");
	double *A = create_one_dim_double(120, "random");

	for (int d = 2; d < 710; d++)
	  for (int c = 3; c < 460; c++)
	    for (int b = 2; b < 1000; b++)
	      for (int a = 2; a < 1000; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-3][c-2]-A[a];
	      }

    return 0;
}