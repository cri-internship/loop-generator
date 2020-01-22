#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(840, 960, 30, "random");
	double *A = create_one_dim_double(330, "random");

	for (int b = 0; b < 329; b++)
	  for (int a = 0; a < 329; a++)
	  {
	    
	     A[a]=B[a][b][a];
	     A[a+1]=0.692;
	  }

    return 0;
}