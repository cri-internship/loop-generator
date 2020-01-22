#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(890, 850, 900, "ones");
	float **B = create_two_dim_float(150, 910, "ones");
	float **E = create_two_dim_float(680, 740, "ones");
	float *A = create_one_dim_float(940, "ones");
	float ***C = create_three_dim_float(420, 410, 330, "ones");

	for (int a = 4; a < 415; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-2][a-4]+0.856;
	  
	    E[a][a]=E[a-4][a-2]/D[a][a][a]-A[a];
	  
	    E[a][a]=E[a+2][a]+0.301;
	  
	    C[a][a][a]=C[a+5][a+5][a+5]+E[a][a]*B[a][a]-B[a][a]/A[a];
	  
	    D[a][a][a]=C[a][a][a]*B[a][a]-C[a][a][a]+A[a];
	    D[a+2][a][a+3]=E[a][a]*0.675;
	  
	    D[a][a][a]=C[a][a][a]+B[a][a]*A[a]-E[a][a];
	}

    return 0;
}