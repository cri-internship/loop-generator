#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(160, 580, "ones");
	double *C = create_one_dim_double(660, "ones");
	double *B = create_one_dim_double(650, "ones");

	for (int b = 0; b < 576; b++)
	  for (int a = 0; a < 160; a++)
	  {
	    
	     A[a][b]=B[a]*C[a];
	     A[a][b+4]=B[a]+C[a];
	  }

    return 0;
}