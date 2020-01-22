#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(640, 900, "ones");
	double **A = create_two_dim_double(810, 960, "ones");

	for (int c = 1; c < 900; c++)
	  for (int b = 0; b < 640; b++)
	    for (int a = 0; a < 640; a++)
	    {
	      
	      B[a][b]=B[a][b-1]+A[a][b];
	    }

    return 0;
}