#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(140, "zeros");
	double ***C = create_three_dim_double(550, 300, 140, "zeros");
	double ***A = create_three_dim_double(330, 910, 750, "zeros");
	double **D = create_two_dim_double(390, 870, "zeros");

	for (int a = 5; a < 140; a++)
	{
	  
	    A[a][a][a]=A[a-5][a][a-3]-0.622;
	  
	    B[a]=0.647;
	    B[a-1]=0.665;
	  
	    C[a][a][a]=C[a][a][a]*B[a]+A[a][a][a];
	    A[a][a][a]=C[a+1][a+2][a+4]-0.989/B[a];
	}

    return 0;
}