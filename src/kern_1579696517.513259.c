#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(200, 20, "ones");
	double *A = create_one_dim_double(20, "ones");
	double *B = create_one_dim_double(190, "ones");
	double ***C = create_three_dim_double(970, 220, 80, "ones");

	for (int a = 0; a < 188; a++)
	{
	  
	    B[a]=C[a][a][a]+A[a]-0.285;
	    B[a+2]=0.814/A[a];
	  
	    C[a][a][a]=0.607;
	    C[a+1][a+1][a+5]=0.842;
	  
	    B[a]=D[a][a]*B[a]+C[a][a][a];
	    C[a][a][a]=D[a+4][a+3]-A[a]/B[a]*C[a][a][a];
	}

    return 0;
}