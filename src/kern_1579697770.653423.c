#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(680, 290, "zeros");
	float ***B = create_three_dim_float(230, 910, 50, "zeros");

	for (int a = 5; a < 226; a++)
	{
	  
	    B[a][a][a]=B[a+4][a+2][a]/0.876;
	  
	    B[a][a][a]=A[a][a];
	  
	    A[a][a]=B[a][a][a];
	    A[a+4][a+5]=0.156;
	  
	    B[a][a][a]=A[a][a]+0.558;
	    A[a][a]=A[a+2][a]/0.879;
	  
	    float var_a=A[a][a]*0.684;
	    float var_b=A[a+4][a+3]+0.132;
	  
	    B[a][a][a]=A[a][a]-B[a][a][a];
	    A[a][a]=A[a-3][a-1]+B[a][a][a];
	}

    return 0;
}