#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(880, "ones");
	double ***B = create_three_dim_double(320, 130, 960, "ones");

	for (int c = 5; c < 880; c++)
	  for (int b = 5; b < 880; b++)
	    for (int a = 5; a < 880; a++)
	    {
	      
	      A[a]=0.398;
	      A[a-5]=0.546;
	    }

    return 0;
}