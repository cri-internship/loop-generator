#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(890, 990, "random");
	double **D = create_two_dim_double(180, 10, "random");
	double ***B = create_three_dim_double(770, 210, 140, "random");
	double ***C = create_three_dim_double(670, 760, 620, "random");

	for (int a = 5; a < 176; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-5][a-1]-0.06;
	  
	    D[a][a]=D[a+3][a+4]*0.907;
	  
	    D[a][a]=0.725;
	  
	    A[a][a]=0.675;
	    A[a][a+4]=0.594;
	  
	    D[a][a]=B[a][a][a]+D[a][a];
	    C[a][a][a]=B[a-1][a-2][a]-0.213;
	  
	    B[a][a][a]=C[a][a][a]*B[a][a][a]+D[a][a]-A[a][a];
	    A[a][a]=C[a+1][a+2][a]+A[a][a]*B[a][a][a]-D[a][a];
	}

    return 0;
}