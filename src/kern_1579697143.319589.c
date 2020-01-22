#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(250, 910, 90, "ones");
	double ***B = create_three_dim_double(870, 840, 60, "ones");
	double **D = create_two_dim_double(970, 620, "ones");
	double ***A = create_three_dim_double(630, 820, 260, "ones");
	double **C = create_two_dim_double(160, 550, "ones");

	for (int a = 5; a < 158; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-5][a-4]-0.612;
	  
	    B[a][a][a]=B[a-3][a-4][a-5]+D[a][a]/0.372*E[a][a][a]-A[a][a][a];
	  
	    B[a][a][a]=B[a][a-5][a-3]-0.005;
	  
	    C[a][a]=C[a+1][a+2]-0.895;
	  
	    A[a][a][a]=A[a+3][a+4][a+3]*0.973;
	  
	    A[a][a][a]=A[a+1][a+2][a+4]-0.026;
	}

    return 0;
}