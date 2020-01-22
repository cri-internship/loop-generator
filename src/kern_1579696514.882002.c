#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(290, 890, "random");
	double *A = create_one_dim_double(700, "random");
	double ***B = create_three_dim_double(660, 60, 680, "random");

	for (int a = 5; a < 286; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-2][a-5]*A[a];
	  
	    C[a][a]=C[a-5][a-5]+B[a][a][a];
	  
	    C[a][a]=C[a+4][a+4]/0.671;
	  
	    double var_a=A[a]-0.47;
	    double var_b=A[a]+0.025;
	  
	    C[a][a]=B[a][a][a]-0.369/C[a][a];
	    A[a]=B[a-3][a][a-1]-A[a]+C[a][a];
	  
	    B[a][a][a]=A[a]+0.864*C[a][a];
	    C[a][a]=A[a+2]+0.983-C[a][a];
	}

    return 0;
}