#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(90, "random");
	double **B = create_two_dim_double(840, 670, "random");
	double ***A = create_three_dim_double(10, 660, 780, "random");
	double *D = create_one_dim_double(510, "random");

	for (int a = 0; a < 837; a++)
	{
	  
	    B[a][a]=0.54;
	    B[a+1][a+3]=0.884;
	}

    return 0;
}