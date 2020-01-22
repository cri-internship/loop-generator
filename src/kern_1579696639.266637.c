#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(860, "random");
	double ***C = create_three_dim_double(850, 780, 150, "random");
	double *A = create_one_dim_double(460, "random");

	for (int a = 4; a < 845; a++)
	{
	  
	    C[a][a][a]=C[a+1][a+5][a+5]/A[a]+B[a];
	  
	    C[a][a][a]=A[a]+B[a];
	  
	    B[a]=0.825;
	    B[a-4]=0.581;
	  
	    double var_a=C[a][a][a]-0.741;
	    double var_b=C[a][a+4][a]+0.818;
	}

    return 0;
}