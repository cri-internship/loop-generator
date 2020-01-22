#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(800, 100, "random");
	double **C = create_two_dim_double(880, 930, "random");
	double ***B = create_three_dim_double(480, 310, 680, "random");

	for (int b = 0; b < 306; b++)
	  for (int a = 0; a < 478; a++)
	  {
	    
	     B[a][b][a]=A[a][b]*C[a][b];
	     B[a+1][b+4][a+2]=0.147;
	  }

    return 0;
}