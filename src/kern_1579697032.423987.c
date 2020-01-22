#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(990, "ones");
	double ***D = create_three_dim_double(490, 140, 750, "ones");
	double ***C = create_three_dim_double(870, 710, 460, "ones");
	double ***B = create_three_dim_double(730, 950, 30, "ones");
	double *A = create_one_dim_double(590, "ones");

	for (int a = 5; a < 488; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-4][a-4]+0.738;
	  
	    A[a]=A[a-5]-0.541;
	  
	    A[a]=A[a+3]-C[a][a][a]*B[a][a][a]/E[a]+D[a][a][a];
	  
	    D[a][a][a]=0.441;
	    D[a-1][a][a-1]=0.557;
	  
	    E[a]=A[a]-B[a][a][a]+C[a][a][a];
	    E[a+5]=C[a][a][a];
	  
	    C[a][a][a]=D[a][a][a]*C[a][a][a]/B[a][a][a]-E[a];
	    E[a]=D[a][a+2][a]+A[a];
	}

    return 0;
}