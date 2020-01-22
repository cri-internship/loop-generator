#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(720, 760, "zeros");
	double ***D = create_three_dim_double(610, 640, 440, "zeros");
	double **C = create_two_dim_double(400, 670, "zeros");
	double *B = create_one_dim_double(50, "zeros");

	for (int a = 0; a < 397; a++)
	{
	  
	    C[a][a]=0.354;
	    C[a+2][a+3]=0.105;
	}

    return 0;
}