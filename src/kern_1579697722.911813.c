#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(20, 340, "random");
	double *A = create_one_dim_double(570, "random");

	for (int b = 5; b < 340; b++)
	  for (int a = 3; a < 20; a++)
	  {
	    
	     A[a]=0.891;
	     A[a]=0.338;
	    
	     B[a][b]=A[a];
	     B[a-3][b-5]=A[a];
	    
	     B[a][b]=B[a][b]/A[a];
	     A[a]=B[a-1][b-1]*A[a];
	    
	     A[a]=A[a]-B[a][b];
	     B[a][b]=A[a+5]-B[a][b];
	    
	     B[a][b]=A[a]-0.753;
	     B[a][b]=A[a+1]-B[a][b];
	  }

    return 0;
}