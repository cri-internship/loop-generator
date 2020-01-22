#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(180, 100, 900, "random");
	double *A = create_one_dim_double(420, "random");
	double ***C = create_three_dim_double(450, 980, 530, "random");

	for (int a = 5; a < 176; a++)
	{
	  
	    double var_a=A[a]+0.239;
	    A[a]=0.86;
	  
	    B[a][a][a]=C[a][a][a]*A[a];
	    B[a+4][a+4][a]=0.969/A[a];
	  
	    C[a][a][a]=A[a]/0.353*B[a][a][a];
	    A[a]=A[a+1]*C[a][a][a];
	  
	    double var_c=A[a]-0.79;
	    double var_d=A[a-5]/0.965;
	  
	    B[a][a][a]=B[a][a][a]*A[a];
	    A[a]=B[a+3][a][a+3]/A[a]*C[a][a][a];
	}

    return 0;
}