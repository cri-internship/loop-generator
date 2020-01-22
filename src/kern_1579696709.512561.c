#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(460, 870, 250, "random");
	double *A = create_one_dim_double(100, "random");
	double **B = create_two_dim_double(280, 480, "random");

	for (int a = 5; a < 100; a++)
	{
	  
	    C[a][a][a]=0.654;
	    C[a+3][a+3][a+3]=0.862;
	  
	    B[a][a]=0.169;
	    B[a-2][a-1]=0.884;
	  
	    C[a][a][a]=A[a]/C[a][a][a];
	    A[a]=A[a-5]+B[a][a];
	  
	    double var_a=C[a][a][a]*0.554;
	    double var_b=C[a-4][a-5][a-1]/0.322;
	}

    return 0;
}