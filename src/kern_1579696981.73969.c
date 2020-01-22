#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(980, 210, 420, "random");
	double *B = create_one_dim_double(640, "random");

	for (int a = 5; a < 640; a++)
	{
	  
	    B[a]=B[a-3]/0.927;
	  
	    A[a][a][a]=A[a-5][a-2][a-4]*B[a];
	  
	    A[a][a][a]=A[a+4][a+3][a+5]+B[a];
	  
	    double var_a=A[a][a][a]+0.554;
	    double var_b=A[a][a-1][a-2]+0.866;
	  
	    A[a][a][a]=B[a]+A[a][a][a];
	    B[a]=B[a-4]+A[a][a][a];
	  
	    B[a]=A[a][a][a]+B[a];
	    A[a][a][a]=A[a-1][a-2][a]-B[a];
	}

    return 0;
}