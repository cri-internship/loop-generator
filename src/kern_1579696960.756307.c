#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(750, 1000, 250, "random");
	double **A = create_two_dim_double(250, 420, "random");
	double **B = create_two_dim_double(730, 360, "random");
	double ***C = create_three_dim_double(340, 610, 600, "random");
	double *E = create_one_dim_double(910, "random");

	for (int a = 0; a < 336; a++)
	{
	  
	    C[a][a][a]=C[a+4][a+4][a+2]-0.606;
	  
	    B[a][a]=E[a];
	    B[a+5][a+4]=D[a][a][a]-C[a][a][a];
	}

    return 0;
}