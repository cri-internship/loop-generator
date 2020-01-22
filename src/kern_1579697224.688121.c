#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(630, 790, "random");
	double *A = create_one_dim_double(10, "random");
	double ***E = create_three_dim_double(430, 610, 820, "random");
	double **D = create_two_dim_double(580, 800, "random");
	double ***C = create_three_dim_double(200, 280, 510, "random");

	for (int a = 5; a < 9; a++)
	{
	  
	    B[a][a]=B[a-5][a]-E[a][a][a];
	  
	    E[a][a][a]=E[a-5][a-4][a-1]-B[a][a]/A[a]+C[a][a][a]*0.881;
	  
	    A[a]=0.239;
	    float  var_a=A[a]*0.819;
	  
	    C[a][a][a]=A[a]/E[a][a][a]+D[a][a];
	    C[a+3][a+3][a+2]=D[a][a]-0.09;
	  
	    A[a]=0.86;
	  
	    C[a][a][a]=B[a][a]*E[a][a][a]/A[a]+D[a][a];
	  
	    double var_b=D[a][a]*0.21;
	    double var_c=D[a-5][a-3]+0.123;
	}

    return 0;
}