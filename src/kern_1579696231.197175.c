#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(830, 980, 890, "ones");
	double **B = create_two_dim_double(850, 70, "ones");
	double *C = create_one_dim_double(760, "ones");
	double ***A = create_three_dim_double(550, 690, 290, "ones");
	double **E = create_two_dim_double(720, 1000, "ones");

	for (int a = 3; a < 717; a++)
	{
	  
	    D[a][a][a]=D[a][a-3][a-1]-C[a]/A[a][a][a]*B[a][a]+E[a][a];
	  
	    E[a][a]=E[a][a+3]*0.196;
	}

    return 0;
}