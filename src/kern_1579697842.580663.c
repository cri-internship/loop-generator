#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(20, 330, "ones");
	double ***B = create_three_dim_double(260, 100, 690, "ones");
	double ***A = create_three_dim_double(990, 730, 840, "ones");
	double *C = create_one_dim_double(280, "ones");

	for (int a = 5; a < 20; a++)
	{
	  
	    B[a][a][a]=B[a-5][a-1][a-3]+0.431;
	  
	    A[a][a][a]=A[a-3][a-5][a-4]+0.956;
	  
	    D[a][a]=0.744;
	    D[a-4][a-5]=0.401;
	  
	    B[a][a][a]=A[a][a][a]*D[a][a];
	  
	    D[a][a]=B[a][a][a]-C[a]*B[a][a][a];
	  
	    B[a][a][a]=B[a][a][a]*C[a];
	    A[a][a][a]=B[a-2][a-5][a]+D[a][a]-C[a];
	}

    return 0;
}