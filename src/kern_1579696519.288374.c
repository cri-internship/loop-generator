#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(620, 480, 530, "ones");
	double **C = create_two_dim_double(160, 650, "ones");
	double *A = create_one_dim_double(330, "ones");

	for (int a = 4; a < 160; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-1][a-4]/0.084;
	  
	    B[a][a][a]=B[a+1][a][a+1]-A[a];
	  
	    C[a][a]=C[a][a]/B[a][a][a]*B[a][a][a];
	    B[a][a][a]=C[a-2][a]-B[a][a][a]+A[a];
	  
	    A[a]=A[a]-0.56/C[a][a];
	    A[a]=A[a+1]*0.389;
	  
	    double var_a=A[a]/0.135;
	    double var_b=A[a-4]+0.126;
	}

    return 0;
}