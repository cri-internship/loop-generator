#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(50, 420, "ones");
	double **A = create_two_dim_double(590, 120, "ones");
	double **B = create_two_dim_double(460, 170, "ones");
	double *C = create_one_dim_double(520, "ones");
	double ***E = create_three_dim_double(360, 460, 330, "ones");

	for (int a = 5; a < 50; a++)
	{
	  
	    D[a][a]=D[a-5][a-1]+0.585;
	  
	    E[a][a][a]=E[a+4][a+4][a+5]/A[a][a]+C[a]*D[a][a];
	  
	    C[a]=E[a][a][a]-B[a][a];
	    C[a]=A[a][a]+D[a][a]*E[a][a][a]-B[a][a];
	}

    return 0;
}