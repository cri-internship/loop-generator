#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(290, 120, "random");
	double **D = create_two_dim_double(250, 390, "random");
	double **C = create_two_dim_double(60, 330, "random");
	double **B = create_two_dim_double(190, 160, "random");
	double *A = create_one_dim_double(920, "random");

	for (int a = 3; a < 58; a++)
	{
	  
	    B[a][a]=B[a-3][a-2]+0.57;
	  
	    C[a][a]=C[a+2][a]-0.751;
	  
	    E[a][a]=D[a][a]+C[a][a]*B[a][a];
	    E[a+2][a+3]=A[a]+D[a][a];
	  
	    double var_a=E[a][a]-0.793;
	    double var_b=E[a-3][a-3]*0.062;
	}

    return 0;
}