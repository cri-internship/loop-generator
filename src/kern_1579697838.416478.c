#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(350, 930, "ones");
	double ***B = create_three_dim_double(560, 200, 610, "ones");
	double ***C = create_three_dim_double(950, 620, 620, "ones");
	double ***A = create_three_dim_double(960, 430, 410, "ones");

	for (int a = 5; a < 555; a++)
	{
	  
	    C[a][a][a]=C[a-4][a-4][a-5]-A[a][a][a];
	  
	    C[a][a][a]=C[a+2][a+4][a]+B[a][a][a]/D[a][a]*D[a][a];
	  
	    B[a][a][a]=0.664;
	    B[a+5][a+4][a]=0.763;
	  
	    A[a][a][a]=0.604;
	    A[a+4][a+3][a+5]=0.068;
	  
	    A[a][a][a]=B[a][a][a]+C[a][a][a]/A[a][a][a]*C[a][a][a];
	    B[a][a][a]=B[a-1][a-3][a-3]+D[a][a];
	  
	    double var_a=C[a][a][a]/0.665;
	    double var_b=C[a+4][a+3][a+2]/0.48;
	  
	    C[a][a][a]=B[a][a][a]+A[a][a][a];
	    D[a][a]=B[a+2][a+2][a+4]-C[a][a][a]/D[a][a];
	}

    return 0;
}