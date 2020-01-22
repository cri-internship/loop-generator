#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(970, 70, "random");
	double *B = create_one_dim_double(740, "random");
	double ***C = create_three_dim_double(40, 210, 540, "random");
	double *D = create_one_dim_double(480, "random");

	for (int a = 5; a < 40; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-4][a-4]+0.001;
	  
	    C[a][a][a]=C[a-4][a-5][a-3]+B[a]/D[a]-A[a][a];
	  
	    A[a][a]=A[a+3][a+3]/C[a][a][a]*C[a][a][a];
	  
	    B[a]=B[a+5]-0.944;
	  
	    double var_a=A[a][a]-0.074;
	    double var_b=A[a+2][a]+0.784;
	  
	    double var_c=A[a][a]+0.557;
	    double var_d=A[a+4][a+5]/0.079;
	}

    return 0;
}