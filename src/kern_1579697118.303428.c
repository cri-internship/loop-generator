#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(20, 700, "random");
	double ***A = create_three_dim_double(740, 820, 220, "random");
	double ***C = create_three_dim_double(10, 150, 730, "random");

	for (int a = 4; a < 10; a++)
	{
	  
	    B[a][a]=B[a-3][a-1]+0.514;
	  
	    C[a][a][a]=C[a-4][a-1][a-3]-B[a][a];
	  
	    A[a][a][a]=A[a+1][a+2][a+3]+C[a][a][a]-B[a][a];
	  
	    C[a][a][a]=0.177;
	  
	    B[a][a]=A[a][a][a];
	  
	    B[a][a]=B[a][a]*C[a][a][a]-A[a][a][a];
	    A[a][a][a]=B[a][a-1]/A[a][a][a]+C[a][a][a];
	}

    return 0;
}