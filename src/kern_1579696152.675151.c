#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(630, 840, 650, "ones");
	float ***B = create_three_dim_float(420, 640, 290, "ones");
	float ***C = create_three_dim_float(310, 260, 680, "ones");

	for (int a = 5; a < 310; a++)
	{
	  
	    A[a][a][a]=A[a-3][a][a-4]/C[a][a][a];
	  
	    A[a][a][a]=A[a+3][a+3][a+3]+0.084;
	  
	    C[a][a][a]=0.787;
	    C[a-3][a-1][a-4]=0.859;
	  
	    B[a][a][a]=A[a][a][a]*C[a][a][a];
	    B[a-3][a-5][a-5]=A[a][a][a]+C[a][a][a];
	  
	    B[a][a][a]=A[a][a][a]+B[a][a][a];
	    C[a][a][a]=A[a+3][a+2][a+5]-B[a][a][a]+C[a][a][a];
	}

    return 0;
}