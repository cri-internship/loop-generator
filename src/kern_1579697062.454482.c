#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(350, 280, 880, "ones");
	float ***C = create_three_dim_float(1000, 880, 200, "ones");
	float ***A = create_three_dim_float(440, 190, 400, "ones");

	for (int a = 5; a < 350; a++)
	{
	  
	    A[a][a][a]=A[a-4][a][a]-0.554;
	  
	    A[a][a][a]=A[a-5][a][a-1]*C[a][a][a]-B[a][a][a];
	  
	    A[a][a][a]=A[a+5][a+5][a+1]/0.562;
	  
	    B[a][a][a]=0.014;
	    B[a][a][a-5]=0.091;
	}

    return 0;
}