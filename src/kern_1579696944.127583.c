#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(210, 520, 950, "ones");
	double *B = create_one_dim_double(730, "ones");

	for (int b = 3; b < 730; b++)
	  for (int a = 3; a < 730; a++)
	  {
	    
	     B[a]=B[a-3]/A[a][b][a];
	  }

    return 0;
}