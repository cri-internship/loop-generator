#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(800, 470, "ones");
	double *D = create_one_dim_double(650, "ones");
	double *C = create_one_dim_double(450, "ones");
	double ***E = create_three_dim_double(350, 1000, 450, "ones");
	double **B = create_two_dim_double(220, 470, "ones");

	for (int c = 0; c < 469; c++)
	  for (int b = 0; b < 220; b++)
	    for (int a = 0; a < 220; a++)
	    {
	      
	      B[a][b]=B[a][b+1]*A[a][b]-C[a];
	    }

    return 0;
}