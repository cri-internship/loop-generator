#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(280, 640, 170, "zeros");
	double ***A = create_three_dim_double(570, 990, 660, "zeros");
	double **B = create_two_dim_double(400, 130, "zeros");
	double **C = create_two_dim_double(630, 980, "zeros");

	for (int a = 5; a < 277; a++)
	{
	  
	    C[a][a]=C[a-3][a-3]/0.266;
	  
	    B[a][a]=B[a-2][a-5]*D[a][a][a]/C[a][a];
	  
	    A[a][a][a]=A[a-3][a-2][a-2]/0.395-B[a][a];
	  
	    B[a][a]=B[a+3][a+3]*A[a][a][a];
	  
	    C[a][a]=0.319/D[a][a][a]+A[a][a][a];
	  
	    B[a][a]=D[a][a][a]-A[a][a][a]/C[a][a]+B[a][a];
	    C[a][a]=D[a][a+1][a+3]-A[a][a][a]+B[a][a]/C[a][a];
	}

    return 0;
}