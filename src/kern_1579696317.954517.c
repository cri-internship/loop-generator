#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(960, "zeros");
	double **B = create_two_dim_double(940, 280, "zeros");

	for (int c = 3; c < 280; c++)
	  for (int b = 5; b < 940; b++)
	    for (int a = 5; a < 940; a++)
	    {
	      
	      B[a][b]=B[a-5][b-3]*A[a];
	      
	      B[a][b]=B[a-5][b]+0.513;
	    }

    return 0;
}