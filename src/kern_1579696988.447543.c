#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(800, "random");
	double **C = create_two_dim_double(720, 410, "random");
	double *D = create_one_dim_double(580, "random");
	double *B = create_one_dim_double(580, "random");
	double ***E = create_three_dim_double(280, 900, 10, "random");

	for (int a = 0; a < 278; a++)
	{
	  
	    E[a][a][a]=E[a+2][a][a+1]*D[a];
	}

    return 0;
}