#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(360, "ones");
	int *E = create_one_dim_int(860, "ones");
	int *B = create_one_dim_int(460, "ones");
	int ***A = create_three_dim_int(980, 720, 800, "ones");
	int **C = create_two_dim_int(40, 640, "ones");

	for (int a = 1; a < 460; a++)
	{
	  
	    B[a]=B[a-1]+E[a]-D[a];
	  
	    E[a]=C[a][a]/A[a][a][a]+B[a];
	    E[a]=D[a]+B[a]/C[a][a];
	  
	    C[a][a]=A[a][a][a]+E[a]*D[a];
	    A[a][a][a]=A[a+5][a+2][a+4]*E[a]-B[a]/D[a];
	}

    return 0;
}