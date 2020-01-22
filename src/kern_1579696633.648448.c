#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(820, "random");
	double *C = create_one_dim_double(300, "random");
	double ***B = create_three_dim_double(760, 200, 670, "random");
	double **E = create_two_dim_double(410, 80, "random");
	double ***D = create_three_dim_double(320, 570, 450, "random");

	for (int a = 5; a < 300; a++)
	{
	  
	    C[a]=C[a-5]+0.095;
	  
	    D[a][a][a]=D[a+5][a+1][a+5]+A[a];
	  
	    B[a][a][a]=B[a+5][a+1][a+5]-0.747;
	  
	    D[a][a][a]=C[a]-E[a][a]+B[a][a][a]*D[a][a][a]/B[a][a][a];
	    B[a][a][a]=C[a-2]*B[a][a][a]-D[a][a][a]+A[a];
	  
	    double var_a=C[a]+0.822;
	}

    return 0;
}