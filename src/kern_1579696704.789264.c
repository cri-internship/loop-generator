#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(360, 270, "ones");
	double *A = create_one_dim_double(140, "ones");

	for (int b = 5; b < 265; b++)
	  for (int a = 3; a < 139; a++)
	  {
	    
	     B[a][b]=B[a][b-5]*A[a];
	    
	     A[a]=A[a-3]+0.712;
	    
	     B[a][b]=B[a+2][b+5]+A[a];
	    
	     A[a]=B[a][b];
	    
	     A[a]=A[a]+B[a][b];
	  }

    return 0;
}