#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(220, 290, "ones");
	double *C = create_one_dim_double(940, "ones");
	double **A = create_two_dim_double(990, 780, "ones");
	double ***D = create_three_dim_double(660, 950, 960, "ones");

	for (int a = 0; a < 656; a++)
	{
	  
	    A[a][a]=A[a+2][a]/0.987;
	  
	    D[a][a][a]=0.104;
	    D[a+4][a+3][a+2]=0.995;
	  
	    C[a]=0.518;
	    C[a+4]=D[a][a][a];
	  
	    D[a][a][a]=A[a][a]-C[a];
	}

    return 0;
}