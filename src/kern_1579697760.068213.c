#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(680, 270, "ones");
	double *A = create_one_dim_double(280, "ones");

	for (int c = 5; c < 277; c++)
	  for (int b = 5; b < 277; b++)
	    for (int a = 5; a < 277; a++)
	    {
	      
	      A[a]=A[a+3]+0.856;
	      
	      B[a][b]=A[a]*B[a][b];
	      A[a]=A[a-5]-0.198;
	    }

    return 0;
}