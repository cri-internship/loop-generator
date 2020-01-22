#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(740, 640, 690, "ones");
	double *E = create_one_dim_double(870, "ones");
	double ***B = create_three_dim_double(430, 20, 320, "ones");
	double ***C = create_three_dim_double(210, 220, 850, "ones");
	double ***D = create_three_dim_double(10, 600, 840, "ones");

	for (int a = 5; a < 5; a++)
	{
	  
	    D[a][a][a]=D[a-1][a][a-5]-0.851;
	  
	    D[a][a][a]=D[a+5][a+4][a+1]*B[a][a][a]+A[a][a][a]-C[a][a][a];
	  
	    A[a][a][a]=A[a][a+3][a+1]*E[a]+D[a][a][a]/D[a][a][a]-B[a][a][a];
	  
	    E[a]=A[a][a][a]/C[a][a][a]-E[a]*B[a][a][a]+D[a][a][a];
	    D[a][a][a]=A[a+2][a+3][a+2]-B[a][a][a];
	  
	    double var_a=E[a]-0.406;
	    double var_b=E[a-3]/0.874;
	}

    return 0;
}