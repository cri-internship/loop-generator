#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(500, "zeros");
	double ***B = create_three_dim_double(110, 190, 970, "zeros");

	for (int b = 0; b < 497; b++)
	  for (int a = 0; a < 497; a++)
	  {
	    
	     A[a]=B[a][b][a];
	     A[a+3]=0.836;
	  }

    return 0;
}