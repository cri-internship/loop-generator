#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(890, 170, 10, "ones");
	float ***A = create_three_dim_float(980, 420, 390, "ones");
	float **C = create_two_dim_float(220, 200, "ones");

	for (int a = 4; a < 220; a++)
	{
	  
	    A[a][a][a]=A[a][a-1][a-4]/0.133*B[a][a][a];
	  
	    B[a][a][a]=B[a][a][a-1]/A[a][a][a];
	  
	    A[a][a][a]=A[a+3][a+1][a+3]-0.085;
	  
	    C[a][a]=0.997;
	    C[a-3][a-2]=0.174;
	  
	    B[a][a][a]=A[a][a][a]*B[a][a][a];
	    A[a][a][a]=A[a][a+1][a+3]/0.241;
	  
	    C[a][a]=B[a][a][a]+C[a][a]-0.683;
	    B[a][a][a]=B[a+5][a+5][a+2]*A[a][a][a];
	}

    return 0;
}