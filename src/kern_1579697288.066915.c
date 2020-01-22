#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(660, "random");
	double ***A = create_three_dim_double(340, 520, 70, "random");

	for (int a = 4; a < 660; a++)
	{
	  
	    B[a]=B[a-4]+A[a][a][a];
	}

    return 0;
}