#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(410, 340, "zeros");
	double ***B = create_three_dim_double(310, 900, 840, "zeros");

	for (int b = 1; b < 340; b++)
	  for (int a = 4; a < 410; a++)
	  {
	    
	     A[a][b]=A[a-4][b-1]*0.912;
	  }

    return 0;
}