#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(600, "ones");
	double ***C = create_three_dim_double(180, 440, 360, "ones");
	double ***A = create_three_dim_double(690, 380, 350, "ones");
	double *B = create_one_dim_double(770, "ones");

	for (int a = 5; a < 176; a++)
	{
	  
	    B[a]=B[a-1]-A[a][a][a]+D[a]/C[a][a][a];
	  
	    A[a][a][a]=A[a-2][a-5][a-5]*0.597;
	  
	    C[a][a][a]=C[a+4][a+4][a+3]+0.048;
	  
	    D[a]=0.27;
	    D[a-2]=A[a][a][a]+B[a];
	  
	    C[a][a][a]=D[a]-0.615/B[a];
	    A[a][a][a]=D[a+3]*C[a][a][a]+B[a];
	  
	    double var_a=D[a]/0.639;
	    double var_b=D[a+5]*0.338;
	  
	    double var_c=D[a]*0.903;
	    double var_d=D[a+2]+0.893;
	}

    return 0;
}