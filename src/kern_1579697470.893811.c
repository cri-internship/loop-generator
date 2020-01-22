#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(740, 540, 280, "zeros");
	float ***C = create_three_dim_float(870, 100, 290, "zeros");
	float **B = create_two_dim_float(90, 900, "zeros");

	for (int a = 5; a < 85; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-4][a-1]/0.042;
	  
	    C[a][a][a]=C[a+5][a+4][a+5]-B[a][a]*A[a][a][a];
	  
	    A[a][a][a]=0.256;
	  
	    C[a][a][a]=0.282;
	  
	    B[a][a]=B[a][a]-0.138/A[a][a][a];
	    C[a][a][a]=B[a+5][a+5]-C[a][a][a];
	}

    return 0;
}