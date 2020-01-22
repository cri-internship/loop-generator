#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(320, 360, "zeros");
	double *B = create_one_dim_double(400, "zeros");
	double *C = create_one_dim_double(100, "zeros");
	double ***A = create_three_dim_double(270, 760, 450, "zeros");
	double ***E = create_three_dim_double(740, 940, 20, "zeros");

	for (int a = 4; a < 100; a++)
	{
	  
	    E[a][a][a]=E[a-4][a][a]*0.082;
	  
	    D[a][a]=D[a-3][a-2]/A[a][a][a]+E[a][a][a]-B[a];
	  
	    C[a]=0.814;
	    float  var_a=C[a]/0.787;
	  
	    D[a][a]=C[a]/0.693;
	  
	    A[a][a][a]=E[a][a][a]*D[a][a]+D[a][a];
	    B[a]=E[a+5][a][a+1]*0.682+C[a];
	  
	    double var_b=D[a][a]-0.824;
	    double var_c=D[a+1][a]/0.697;
	}

    return 0;
}