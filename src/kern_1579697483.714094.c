#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(710, 40, 820, "ones");
	double *A = create_one_dim_double(590, "ones");

	for (int b = 5; b < 590; b++)
	  for (int a = 5; a < 590; a++)
	  {
	    
	     A[a]=A[a-4]+0.791;
	    
	     A[a]=A[a-5]*B[a][b][a];
	    
	     A[a]=A[a-3]/0.162;
	  }

    return 0;
}