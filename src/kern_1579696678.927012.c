#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(870, 380, "random");
	double *B = create_one_dim_double(530, "random");

	for (int c = 0; c < 380; c++)
	  for (int b = 0; b < 868; b++)
	    for (int a = 0; a < 868; a++)
	    {
	      
	      B[a]=A[a][b]-B[a];
	      A[a][b]=A[a+2][b]*B[a];
	    }

    return 0;
}