#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(140, "ones");
	double ***C = create_three_dim_double(290, 460, 180, "ones");
	double **D = create_two_dim_double(970, 630, "ones");
	double **A = create_two_dim_double(300, 130, "ones");

	for (int b = 0; b < 135; b++)
	  for (int a = 0; a < 135; a++)
	  {
	    
	     B[a]=0.144;
	     B[a]=0.826;
	  }

    return 0;
}