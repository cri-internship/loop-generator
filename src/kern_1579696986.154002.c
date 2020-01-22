#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(730, 120, 250, "zeros");
	double *D = create_one_dim_double(130, "zeros");
	double *A = create_one_dim_double(30, "zeros");
	double *B = create_one_dim_double(440, "zeros");

	for (int a = 4; a < 30; a++)
	{
	  
	    C[a][a][a]=0.692;
	    C[a+5][a+4][a+1]=0.794;
	  
	    C[a][a][a]=D[a]+B[a];
	  
	    D[a]=C[a][a][a];
	    D[a-4]=A[a]-C[a][a][a];
	  
	    B[a]=D[a]*A[a]+B[a]-C[a][a][a];
	    D[a]=D[a-1]/C[a][a][a]+B[a]*A[a];
	  
	    double var_a=D[a]*0.559;
	    double var_b=D[a+1]-0.96;
	}

    return 0;
}