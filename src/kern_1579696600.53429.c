#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(310, "random");
	double ***C = create_three_dim_double(840, 790, 620, "random");
	double ***A = create_three_dim_double(70, 370, 170, "random");
	double ***B = create_three_dim_double(490, 690, 780, "random");

	for (int a = 5; a < 66; a++)
	{
	  
	    D[a]=D[a+5]-0.113;
	  
	    A[a][a][a]=A[a][a+1][a+3]*0.313;
	  
	    A[a][a][a]=A[a+3][a+4][a+4]*0.931;
	  
	    B[a][a][a]=C[a][a][a];
	    B[a-1][a-1][a]=D[a]+A[a][a][a];
	  
	    double var_a=A[a][a][a]*0.796;
	    double var_b=A[a-2][a-4][a-4]*0.023;
	  
	    A[a][a][a]=D[a]*B[a][a][a]/B[a][a][a]+C[a][a][a];
	    C[a][a][a]=D[a-5]/C[a][a][a];
	}

    return 0;
}