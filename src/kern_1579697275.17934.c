#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(720, "ones");
	double **A = create_two_dim_double(940, 330, "ones");

	for (int b = 0; b < 720; b++)
	  for (int a = 0; a < 720; a++)
	  {
	    
	     A[a][b]=B[a]*A[a][b];
	     B[a]=B[a]+0.058;
	  }

    return 0;
}