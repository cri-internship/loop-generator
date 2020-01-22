#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(1000, "random");
	int ***C = create_three_dim_int(750, 920, 530, "random");
	int *E = create_one_dim_int(950, "random");
	int ***D = create_three_dim_int(480, 720, 600, "random");
	int *A = create_one_dim_int(560, "random");

	for (int a = 5; a < 480; a++)
	{
	  
	    C[a][a][a]=C[a-5][a][a-5]*39;
	  
	    B[a]=B[a-2]-D[a][a][a]*E[a]/A[a]+C[a][a][a];
	  
	    C[a][a][a]=C[a+5][a+5][a+3]+29;
	  
	    A[a]=B[a]+B[a]-D[a][a][a]*E[a];
	    A[a+1]=E[a]/D[a][a][a]+B[a]-C[a][a][a];
	  
	    D[a][a][a]=41;
	    D[a-1][a-2][a-1]=E[a]-47+C[a][a][a];
	}

    return 0;
}