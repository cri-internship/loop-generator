#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(530, 290, "random");
	double **A = create_two_dim_double(780, 280, "random");

	for (int c = 5; c < 277; c++)
	  for (int b = 3; b < 530; b++)
	    for (int a = 3; a < 530; a++)
	    {
	      
	      A[a][b]=A[a-3][b]+0.434;
	      
	      A[a][b]=A[a+3][b+3]+0.009;
	      
	      B[a][b]=A[a][b];
	      B[a-3][b-5]=A[a][b];
	      
	      B[a][b]=0.604;
	    }

    return 0;
}