#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(820, "ones");
	double **B = create_two_dim_double(250, 160, "ones");
	double **C = create_two_dim_double(960, 310, "ones");

	for (int a = 5; a < 246; a++)
	{
	  
	    C[a][a]=C[a][a-4]+0.289;
	  
	    B[a][a]=B[a-5][a-1]-0.757;
	  
	    B[a][a]=B[a-3][a]+A[a];
	  
	    B[a][a]=B[a][a+1]*C[a][a]+0.221;
	  
	    C[a][a]=C[a+2][a]+0.038;
	  
	    B[a][a]=B[a+1][a+4]*0.903;
	  
	    B[a][a]=B[a][a]+A[a]-C[a][a];
	    A[a]=B[a][a-5]-C[a][a];
	}

    return 0;
}