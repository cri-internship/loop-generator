#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(790, "ones");
	double ***B = create_three_dim_double(610, 190, 460, "ones");
	double ***A = create_three_dim_double(670, 170, 380, "ones");
	double ***C = create_three_dim_double(880, 500, 260, "ones");
	double **E = create_two_dim_double(980, 720, "ones");

	for (int a = 4; a < 607; a++)
	{
	  
	    E[a][a]=E[a][a-4]+B[a][a][a]/D[a]-A[a][a][a]*0.558;
	  
	    B[a][a][a]=B[a][a-4][a]*0.626;
	  
	    B[a][a][a]=B[a+3][a][a+2]-0.469;
	  
	    E[a][a]=E[a+3][a]/B[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+1][a+2]*E[a][a];
	  
	    C[a][a][a]=C[a+4][a+1][a+1]*D[a]-0.479;
	}

    return 0;
}