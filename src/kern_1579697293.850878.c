#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(370, "zeros");
	double ***B = create_three_dim_double(260, 570, 860, "zeros");
	double ***C = create_three_dim_double(100, 750, 410, "zeros");
	double ***A = create_three_dim_double(1000, 520, 740, "zeros");
	double *E = create_one_dim_double(720, "zeros");

	for (int a = 5; a < 367; a++)
	{
	  
	    A[a][a][a]=A[a][a-4][a-5]/E[a]*D[a];
	  
	    A[a][a][a]=A[a-3][a-5][a-2]-C[a][a][a]*B[a][a][a]/C[a][a][a];
	  
	    E[a]=E[a+2]-0.139;
	  
	    D[a]=D[a+3]+0.078;
	  
	    D[a]=D[a+2]-0.808;
	}

    return 0;
}