#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(880, 990, 390, "zeros");
	double **B = create_two_dim_double(590, 430, "zeros");

	for (int b = 0; b < 425; b++)
	  for (int a = 2; a < 586; a++)
	  {
	    
	     A[a][b][a]=A[a][b][a-2]-0.601;
	    
	     B[a][b]=B[a+4][b+1]/0.316;
	    
	     B[a][b]=A[a][b][a];
	  }

    return 0;
}