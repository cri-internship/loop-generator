#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(420, 20, "ones");
	double *B = create_one_dim_double(570, "ones");

	for (int b = 1; b < 20; b++)
	  for (int a = 4; a < 420; a++)
	  {
	    
	     A[a][b]=B[a];
	     A[a-4][b-1]=B[a];
	  }

    return 0;
}