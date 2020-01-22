#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(820, 490, "random");
	double ***D = create_three_dim_double(260, 260, 450, "random");
	double **B = create_two_dim_double(550, 310, "random");
	double *A = create_one_dim_double(10, "random");

	for (int a = 3; a < 5; a++)
	{
	  
	    A[a]=A[a-2]*0.356;
	  
	    A[a]=A[a-3]/B[a][a]+C[a][a]*D[a][a][a];
	  
	    C[a][a]=C[a-3][a]-A[a]/B[a][a]+A[a];
	  
	    B[a][a]=B[a][a+5]+C[a][a];
	  
	    B[a][a]=B[a+2][a+5]/0.282;
	  
	    A[a]=A[a+5]+0.722;
	  
	    D[a][a][a]=0.961/A[a];
	    D[a+3][a+4][a]=0.464*B[a][a];
	}

    return 0;
}