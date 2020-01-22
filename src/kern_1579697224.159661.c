#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(790, 40, "zeros");
	double ***C = create_three_dim_double(510, 80, 850, "zeros");
	double ***D = create_three_dim_double(560, 860, 340, "zeros");
	double ***B = create_three_dim_double(860, 970, 730, "zeros");
	double *E = create_one_dim_double(700, "zeros");

	for (int a = 0; a < 505; a++)
	{
	  
	    B[a][a][a]=B[a][a+1][a+4]-0.734;
	  
	    A[a][a]=A[a+2][a+4]*0.375;
	  
	    C[a][a][a]=0.575;
	    C[a+5][a+4][a+2]=0.312;
	  
	    D[a][a][a]=0.286;
	    D[a+2][a+4][a+1]=0.254;
	}

    return 0;
}