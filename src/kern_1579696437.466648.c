#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(650, 760, 40, "random");
	double *A = create_one_dim_double(960, "random");
	double *B = create_one_dim_double(880, "random");

	for (int b = 1; b < 876; b++)
	  for (int a = 1; a < 876; a++)
	  {
	    
	     B[a]=B[a-1]*0.719;
	    
	     B[a]=B[a+4]*0.92;
	  }

    return 0;
}