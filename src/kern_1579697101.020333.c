#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(530, 890, "ones");
	double *A = create_one_dim_double(510, "ones");
	double *C = create_one_dim_double(820, "ones");

	for (int b = 2; b < 887; b++)
	  for (int a = 3; a < 510; a++)
	  {
	    
	     A[a]=B[a][b];
	     A[a]=A[a]*C[a]/C[a];
	    
	     B[a][b]=B[a+2][b+2]+A[a];
	    
	     B[a][b]=B[a+3][b+3]+0.058;
	    
	     C[a]=A[a];
	     C[a-3]=B[a][b];
	  }

    return 0;
}