#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(620, "ones");
	double **B = create_two_dim_double(80, 550, "ones");

	for (int b = 3; b < 550; b++)
	  for (int a = 3; a < 76; a++)
	  {
	    
	     B[a][b]=B[a-3][b-3]/A[a];
	    
	     A[a]=A[a+3]/0.435;
	    
	     A[a]=0.233;
	    
	     A[a]=B[a][b]+A[a];
	     B[a][b]=B[a+4][b]-A[a];
	  }

    return 0;
}