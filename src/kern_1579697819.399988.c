#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(500, 390, 130, "zeros");
	double *A = create_one_dim_double(120, "zeros");
	double *D = create_one_dim_double(560, "zeros");
	double **B = create_two_dim_double(120, 880, "zeros");

	for (int c = 0; c < 877; c++)
	  for (int b = 0; b < 119; b++)
	    for (int a = 0; a < 119; a++)
	    {
	      
	      B[a][b]=B[a+1][b+3]+0.705;
	    }

    return 0;
}