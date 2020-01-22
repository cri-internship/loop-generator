#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(490, 680, "ones");
	double *B = create_one_dim_double(490, "ones");
	double ***D = create_three_dim_double(740, 960, 250, "ones");
	double *A = create_one_dim_double(800, "ones");

	for (int c = 0; c < 680; c++)
	  for (int b = 0; b < 485; b++)
	    for (int a = 0; a < 485; a++)
	    {
	      
	      C[a][b]=C[a+5][b]-0.492;
	    }

    return 0;
}