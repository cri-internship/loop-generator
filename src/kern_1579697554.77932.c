#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(910, "zeros");
	double **A = create_two_dim_double(170, 170, "zeros");
	double **D = create_two_dim_double(140, 1000, "zeros");
	double **B = create_two_dim_double(320, 830, "zeros");
	double ***E = create_three_dim_double(260, 850, 220, "zeros");

	for (int a = 5; a < 136; a++)
	{
	  
	    A[a][a]=A[a-4][a-5]*0.088;
	  
	    C[a]=C[a-1]-A[a][a]*B[a][a]/D[a][a];
	  
	    A[a][a]=0.211;
	  
	    E[a][a][a]=0.223;
	    E[a-2][a][a-5]=0.002;
	  
	    double var_a=A[a][a]+0.005;
	  
	    double var_c=D[a][a]/0.448;
	    double var_d=D[a+4][a+3]-0.98;
	}

    return 0;
}