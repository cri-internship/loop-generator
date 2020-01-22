#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(990, "random");
	double *E = create_one_dim_double(960, "random");
	double ***C = create_three_dim_double(670, 100, 20, "random");
	double **B = create_two_dim_double(350, 290, "random");
	double *D = create_one_dim_double(760, "random");

	for (int d = 1; d < 20; d++)
	  for (int c = 5; c < 100; c++)
	    for (int b = 1; b < 670; b++)
	      for (int a = 1; a < 670; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b-5][c-1]+0.618;
	      }

    return 0;
}