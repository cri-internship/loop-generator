#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(250, 550, "zeros");
	double *A = create_one_dim_double(560, "zeros");

	for (int c = 4; c < 550; c++)
	  for (int b = 0; b < 250; b++)
	    for (int a = 0; a < 250; a++)
	    {
	      
	      B[a][b]=B[a][b-4]+0.538;
	    }

    return 0;
}