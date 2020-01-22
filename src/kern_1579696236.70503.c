#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(320, 170, 690, "ones");
	double *A = create_one_dim_double(460, "ones");
	double ***C = create_three_dim_double(410, 540, 260, "ones");
	double ***B = create_three_dim_double(60, 630, 890, "ones");
	double ***D = create_three_dim_double(200, 320, 390, "ones");

	for (int a = 3; a < 56; a++)
	{
	  
	    E[a][a][a]=E[a-1][a-1][a]*A[a]+B[a][a][a]-D[a][a][a];
	  
	    D[a][a][a]=D[a+3][a+3][a+2]-E[a][a][a]+0.478*C[a][a][a]/E[a][a][a];
	  
	    D[a][a][a]=D[a][a+3][a+4]*0.621;
	  
	    B[a][a][a]=B[a+4][a][a+4]/0.338;
	}

    return 0;
}