#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(950, "random");
	double *C = create_one_dim_double(260, "random");
	double ***B = create_three_dim_double(970, 660, 610, "random");

	for (int b = 4; b < 950; b++)
	  for (int a = 4; a < 950; a++)
	  {
	    
	     A[a]=A[a]/C[a]+0.35;
	     B[a][b][a]=A[a-4]/B[a][b][a]+C[a];
	  }

    return 0;
}