#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(190, 410, 480, "random");
	double ***D = create_three_dim_double(500, 420, 720, "random");
	double *C = create_one_dim_double(870, "random");
	double **B = create_two_dim_double(530, 530, "random");
	double ***A = create_three_dim_double(550, 750, 690, "random");

	for (int a = 5; a < 497; a++)
	{
	  
	    B[a][a]=B[a-5][a]/C[a]-A[a][a][a]*D[a][a][a];
	  
	    D[a][a][a]=D[a+1][a+3][a+2]-0.185;
	  
	    C[a]=B[a][a]/E[a][a][a];
	    E[a][a][a]=B[a-2][a-2]*D[a][a][a]+A[a][a][a]-E[a][a][a]/C[a];
	  
	    double var_a=A[a][a][a]*0.226;
	    double var_b=A[a-3][a-4][a-5]+0.24;
	  
	    double var_c=B[a][a]/0.835;
	    double var_d=B[a+1][a+2]*0.018;
	}

    return 0;
}