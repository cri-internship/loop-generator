#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(460, 940, "random");
	double *A = create_one_dim_double(600, "random");
	double *E = create_one_dim_double(310, "random");
	double **C = create_two_dim_double(790, 990, "random");
	double **B = create_two_dim_double(450, 570, "random");

	for (int c = 3; c < 570; c++)
	  for (int b = 5; b < 310; b++)
	    for (int a = 5; a < 310; a++)
	    {
	      
	      E[a]=B[a][b];
	      E[a-5]=A[a]/D[a][b];
	      
	      B[a][b]=0.277;
	      B[a-2][b-3]=0.681;
	    }

    return 0;
}