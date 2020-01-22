#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(480, 370, "ones");
	double **A = create_two_dim_double(420, 670, "ones");
	double ***B = create_three_dim_double(640, 590, 730, "ones");

	for (int a = 5; a < 418; a++)
	{
	  
	    A[a][a]=A[a-1][a-1]/C[a][a];
	  
	    A[a][a]=A[a+2][a+2]*0.383;
	  
	    B[a][a][a]=B[a+3][a][a+3]/A[a][a]*A[a][a];
	  
	    C[a][a]=0.737;
	    C[a+4][a+3]=0.577;
	  
	    B[a][a][a]=C[a][a]*A[a][a];
	}

    return 0;
}