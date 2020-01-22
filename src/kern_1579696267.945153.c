#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(600, 660, "ones");
	double *A = create_one_dim_double(340, "ones");

	for (int b = 0; b < 659; b++)
	  for (int a = 2; a < 597; a++)
	  {
	    
	     B[a][b]=0.821;
	     B[a-2][b]=0.949;
	    
	     B[a][b]=B[a][b]-0.287;
	     A[a]=B[a+3][b+1]-A[a];
	  }

    return 0;
}