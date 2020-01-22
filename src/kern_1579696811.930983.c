#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(40, "ones");
	double *C = create_one_dim_double(550, "ones");
	double ***A = create_three_dim_double(960, 920, 670, "ones");
	double ***B = create_three_dim_double(650, 580, 350, "ones");

	for (int a = 0; a < 40; a++)
	{
	  
	    D[a]=0.857;
	    D[a]=0.504;
	  
	    A[a][a][a]=C[a]/B[a][a][a]*D[a]-A[a][a][a];
	    C[a]=C[a]+A[a][a][a];
	  
	    double var_a=C[a]+0.646;
	    double var_b=C[a+5]*0.486;
	  
	    D[a]=A[a][a][a]*0.758;
	    B[a][a][a]=A[a][a+2][a+4]/D[a]-C[a];
	}

    return 0;
}