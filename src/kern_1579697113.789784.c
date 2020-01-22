#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(940, 230, 840, "ones");
	double ***C = create_three_dim_double(990, 600, 750, "ones");
	double **D = create_two_dim_double(450, 940, "ones");
	double ***A = create_three_dim_double(110, 1000, 730, "ones");
	double ***E = create_three_dim_double(930, 270, 420, "ones");

	for (int a = 5; a < 105; a++)
	{
	  
	    A[a][a][a]=A[a][a][a+5]+0.415;
	  
	    C[a][a][a]=C[a+2][a+4][a+4]*0.115;
	  
	    double var_a=C[a][a][a]-0.34;
	    double var_b=C[a-3][a-2][a-5]+0.011;
	  
	    D[a][a]=B[a][a][a]+D[a][a]/A[a][a][a]-E[a][a][a]*C[a][a][a];
	    A[a][a][a]=B[a][a][a-5]+D[a][a]*E[a][a][a]-A[a][a][a]/C[a][a][a];
	}

    return 0;
}