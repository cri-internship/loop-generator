#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(560, "zeros");
	double ***A = create_three_dim_double(60, 760, 240, "zeros");
	double *D = create_one_dim_double(330, "zeros");
	double ***C = create_three_dim_double(490, 480, 790, "zeros");
	double ***E = create_three_dim_double(700, 790, 940, "zeros");

	for (int a = 0; a < 55; a++)
	{
	  
	    A[a][a][a]=A[a+2][a+3][a+4]*0.903;
	  
	    C[a][a][a]=C[a][a+5][a+5]*0.072;
	  
	    D[a]=A[a][a][a]+B[a]/D[a]*C[a][a][a];
	    B[a]=A[a+5][a+3][a+3]-0.37/C[a][a][a];
	  
	    E[a][a][a]=A[a][a][a]-D[a];
	    C[a][a][a]=A[a+3][a+1][a+5]-0.069;
	}

    return 0;
}