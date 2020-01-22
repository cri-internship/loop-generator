#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(660, 770, "ones");
	double ***C = create_three_dim_double(20, 120, 700, "ones");
	double ***D = create_three_dim_double(890, 240, 990, "ones");
	double **A = create_two_dim_double(80, 720, "ones");

	for (int a = 4; a < 17; a++)
	{
	  
	    A[a][a]=A[a-2][a-2]*D[a][a][a]+B[a][a];
	  
	    A[a][a]=A[a][a-4]*C[a][a][a]-D[a][a][a];
	  
	    A[a][a]=A[a-2][a-4]*C[a][a][a]/B[a][a]+D[a][a][a];
	  
	    C[a][a][a]=C[a+3][a][a+1]+0.764;
	}

    return 0;
}