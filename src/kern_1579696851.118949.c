#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(390, 960, "random");
	double ***A = create_three_dim_double(380, 160, 350, "random");

	for (int b = 0; b < 155; b++)
	  for (int a = 4; a < 379; a++)
	  {
	    
	     A[a][b][a]=A[a+1][b+1][a+1]/0.303;
	    
	     A[a][b][a]=B[a][b];
	    
	     B[a][b]=A[a][b][a]/0.026;
	     A[a][b][a]=A[a-4][b][a-2]-B[a][b];
	  }

    return 0;
}