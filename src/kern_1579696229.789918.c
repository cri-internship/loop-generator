#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(20, 900, 750, "random");
	double ***B = create_three_dim_double(860, 10, 970, "random");
	double ***A = create_three_dim_double(720, 270, 190, "random");
	double ***E = create_three_dim_double(200, 480, 220, "random");
	double *C = create_one_dim_double(210, "random");

	for (int a = 5; a < 20; a++)
	{
	  
	    E[a][a][a]=E[a-4][a-5][a]*0.473;
	  
	    D[a][a][a]=D[a][a-1][a]+0.261;
	  
	    C[a]=C[a-5]*0.095;
	  
	    C[a]=C[a+2]-0.005;
	  
	    double var_a=A[a][a][a]+0.418;
	    double var_b=A[a-3][a][a]/0.802;
	  
	    D[a][a][a]=A[a][a][a]+C[a]-B[a][a][a];
	    A[a][a][a]=A[a+2][a+3][a]/E[a][a][a];
	}

    return 0;
}