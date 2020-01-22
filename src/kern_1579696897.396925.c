#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(460, "ones");
	double *E = create_one_dim_double(990, "ones");
	double **B = create_two_dim_double(290, 160, "ones");
	double **D = create_two_dim_double(390, 610, "ones");
	double ***A = create_three_dim_double(300, 260, 410, "ones");

	for (int a = 1; a < 285; a++)
	{
	  
	    B[a][a]=B[a-1][a-1]+0.039;
	  
	    B[a][a]=B[a+1][a+5]*C[a]+A[a][a][a];
	}

    return 0;
}