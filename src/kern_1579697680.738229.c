#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(260, 890, "random");
	double *A = create_one_dim_double(880, "random");
	double **C = create_two_dim_double(850, 350, "random");
	double ***B = create_three_dim_double(400, 540, 120, "random");

	for (int a = 3; a < 845; a++)
	{
	  
	    C[a][a]=C[a][a+2]+0.622;
	  
	    A[a]=C[a][a]*B[a][a][a];
	    A[a-3]=D[a][a]/B[a][a][a]*C[a][a];
	  
	    double var_a=C[a][a]+0.561;
	    double var_b=C[a+5][a+3]*0.584;
	}

    return 0;
}