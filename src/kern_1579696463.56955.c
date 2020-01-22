#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(290, "zeros");
	double ***A = create_three_dim_double(900, 910, 590, "zeros");
	double **E = create_two_dim_double(880, 500, "zeros");
	double ***B = create_three_dim_double(330, 40, 830, "zeros");
	double ***D = create_three_dim_double(840, 740, 260, "zeros");

	for (int a = 4; a < 290; a++)
	{
	  
	    D[a][a][a]=C[a]/B[a][a][a];
	    D[a-3][a-2][a-4]=E[a][a]*A[a][a][a]+0.277;
	  
	    C[a]=D[a][a][a]*A[a][a][a]-D[a][a][a];
	    C[a]=D[a][a][a]+E[a][a];
	}

    return 0;
}