#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(330, "random");
	double **A = create_two_dim_double(430, 240, "random");
	double ***B = create_three_dim_double(770, 290, 630, "random");
	double **C = create_two_dim_double(320, 400, "random");

	for (int a = 5; a < 316; a++)
	{
	  
	    C[a][a]=C[a+4][a]*0.577;
	  
	    D[a]=D[a+5]-A[a][a];
	  
	    C[a][a]=B[a][a][a]*D[a]+B[a][a][a];
	  
	    double var_a=A[a][a]-0.279;
	    double var_b=A[a-3][a]-0.882;
	  
	    D[a]=B[a][a][a]-C[a][a]*A[a][a]/D[a];
	    C[a][a]=B[a-3][a-3][a-4]-A[a][a]/0.781;
	  
	    double var_c=A[a][a]/0.551;
	    double var_d=A[a+1][a+3]/0.461;
	  
	    B[a][a][a]=B[a][a][a]*A[a][a]/D[a];
	    A[a][a]=B[a+3][a+3][a+4]-C[a][a]/D[a]+A[a][a];
	}

    return 0;
}