#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(110, "ones");
	double **D = create_two_dim_double(760, 680, "ones");
	double **A = create_two_dim_double(430, 350, "ones");
	double ***B = create_three_dim_double(130, 30, 910, "ones");
	double ***C = create_three_dim_double(370, 90, 740, "ones");

	for (int a = 5; a < 106; a++)
	{
	  
	    C[a][a][a]=C[a-4][a-3][a]+0.393;
	  
	    C[a][a][a]=C[a-1][a-5][a]+0.716;
	  
	    C[a][a][a]=C[a+5][a+3][a+3]/0.261;
	  
	    E[a]=E[a]-0.549*C[a][a][a];
	    C[a][a][a]=E[a+4]-A[a][a]/B[a][a][a]+A[a][a];
	  
	    A[a][a]=E[a]*B[a][a][a]-0.266/D[a][a]+A[a][a];
	    D[a][a]=E[a+1]+0.612/B[a][a][a];
	}

    return 0;
}