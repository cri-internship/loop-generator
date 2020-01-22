#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(250, 580, 90, "ones");
	float *E = create_one_dim_float(400, "ones");
	float ***C = create_three_dim_float(580, 50, 510, "ones");
	float ***A = create_three_dim_float(590, 650, 20, "ones");
	float *B = create_one_dim_float(930, "ones");

	for (int a = 4; a < 399; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-2][a]/0.962;
	  
	    A[a][a][a]=A[a-2][a-1][a]+0.592;
	  
	    A[a][a][a]=C[a][a][a]+D[a][a][a]-E[a]*D[a][a][a];
	  
	    C[a][a][a]=E[a]/A[a][a][a];
	    A[a][a][a]=E[a+1]-C[a][a][a]*0.153+A[a][a][a]/B[a];
	  
	    E[a]=C[a][a][a]*D[a][a][a];
	    B[a]=C[a-2][a-4][a-2]*D[a][a][a];
	}

    return 0;
}