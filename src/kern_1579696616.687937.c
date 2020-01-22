#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(770, 520, 760, "ones");
	double **A = create_two_dim_double(220, 460, "ones");

	for (int b = 3; b < 460; b++)
	  for (int a = 4; a < 220; a++)
	  {
	    
	     A[a][b]=A[a-4][b-3]/0.599;
	  }

    return 0;
}