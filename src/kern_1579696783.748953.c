#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(520, "ones");
	double **B = create_two_dim_double(90, 150, "ones");

	for (int c = 2; c < 146; c++)
	  for (int b = 5; b < 88; b++)
	    for (int a = 5; a < 88; a++)
	    {
	      
	      A[a]=A[a-3]*B[a][b];
	      
	      A[a]=A[a+4]+B[a][b];
	      
	      A[a]=A[a+2]-0.143;
	      
	      B[a][b]=0.402;
	      B[a+2][b+4]=0.818;
	      
	      B[a][b]=0.06;
	    }

    return 0;
}