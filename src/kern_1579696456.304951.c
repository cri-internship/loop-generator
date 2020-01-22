#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(500, 580, 90, "random");
	double ***A = create_three_dim_double(930, 590, 650, "random");
	double *B = create_one_dim_double(240, "random");

	for (int a = 5; a < 235; a++)
	{
	  
	    A[a][a][a]=0.789;
	    A[a][a-5][a-4]=0.785;
	  
	    A[a][a][a]=A[a][a][a]-C[a][a][a]/B[a];
	    B[a]=A[a-1][a-2][a-3]+C[a][a][a];
	  
	    C[a][a][a]=A[a][a][a]/C[a][a][a]-B[a];
	    C[a][a][a]=A[a+5][a+1][a]*C[a][a][a];
	  
	    double var_a=B[a]/0.729;
	    double var_b=B[a+5]*0.156;
	  
	    double var_c=B[a]/0.259;
	    double var_d=B[a+4]/0.593;
	}

    return 0;
}