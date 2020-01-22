#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(80, "random");
	double ***B = create_three_dim_double(280, 310, 100, "random");
	double ***C = create_three_dim_double(530, 950, 710, "random");
	double ***A = create_three_dim_double(810, 230, 170, "random");

	for (int a = 3; a < 805; a++)
	{
	  
	    A[a][a][a]=A[a-1][a][a-3]/0.832;
	  
	    A[a][a][a]=A[a][a+5][a+4]/0.229;
	}

    return 0;
}