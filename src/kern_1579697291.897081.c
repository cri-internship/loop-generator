#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(580, 580, "random");
	double **A = create_two_dim_double(800, 160, "random");
	double **C = create_two_dim_double(460, 140, "random");
	double **E = create_two_dim_double(80, 660, "random");
	double ***D = create_three_dim_double(240, 90, 20, "random");

	for (int a = 5; a < 240; a++)
	{
	  
	    D[a][a][a]=D[a-5][a][a-5]*0.559;
	  
	    A[a][a]=A[a+2][a+3]/0.485;
	}

    return 0;
}