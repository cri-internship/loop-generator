#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(310, 890, "random");
	double *A = create_one_dim_double(480, "random");

	for (int c = 1; c < 885; c++)
	  for (int b = 4; b < 308; b++)
	    for (int a = 4; a < 308; a++)
	    {
	      
	      B[a][b]=B[a-2][b]+A[a];
	      
	      A[a]=A[a+2]-B[a][b];
	      
	      A[a]=A[a+5]/B[a][b];
	      
	      A[a]=0.654;
	      
	      A[a]=B[a][b];
	      
	      B[a][b]=A[a];
	    }

    return 0;
}