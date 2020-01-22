#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(850, 830, "random");
	double ***A = create_three_dim_double(780, 520, 190, "random");

	for (int a = 4; a < 780; a++)
	{
	  
	    A[a][a][a]=B[a][a];
	    A[a-2][a-2][a-4]=0.479;
	  
	    B[a][a]=0.535;
	    B[a-4][a-2]=A[a][a][a];
	}

    return 0;
}