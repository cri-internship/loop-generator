#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(940, "random");
	double ***B = create_three_dim_double(380, 490, 470, "random");

	for (int b = 2; b < 485; b++)
	  for (int a = 4; a < 376; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-2][a-4]*A[a];
	    
	     B[a][b][a]=B[a][b+5][a+1]-A[a];
	    
	     B[a][b][a]=B[a][b][a]-A[a];
	     A[a]=B[a+4][b+1][a+1]/0.946;
	  }

    return 0;
}