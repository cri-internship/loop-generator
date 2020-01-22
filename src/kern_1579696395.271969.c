#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(500, "random");
	double ***C = create_three_dim_double(880, 60, 600, "random");
	double ***A = create_three_dim_double(100, 30, 210, "random");
	double **B = create_two_dim_double(380, 130, "random");

	for (int d = 5; d < 210; d++)
	  for (int c = 4; c < 30; c++)
	    for (int b = 4; b < 100; b++)
	      for (int a = 4; a < 100; a++)
	      {
	        
	       A[a][b][c]=0.983;
	       A[a-4][b-4][c-5]=0.1;
	      }

    return 0;
}