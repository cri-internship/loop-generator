#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(540, "ones");
	double *A = create_one_dim_double(840, "ones");
	double *C = create_one_dim_double(700, "ones");
	double *B = create_one_dim_double(420, "ones");

	for (int b = 3; b < 840; b++)
	  for (int a = 3; a < 840; a++)
	  {
	    
	     A[a]=D[a]-C[a]*B[a];
	     A[a-3]=B[a]+C[a]-D[a];
	  }

    return 0;
}