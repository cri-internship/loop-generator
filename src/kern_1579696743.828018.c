#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(20, 80, 200, "zeros");
	double *A = create_one_dim_double(390, "zeros");
	double **B = create_two_dim_double(320, 960, "zeros");

	for (int c = 0; c < 960; c++)
	  for (int b = 1; b < 320; b++)
	    for (int a = 1; a < 320; a++)
	    {
	      
	      B[a][b]=B[a-1][b]*0.52;
	    }

    return 0;
}