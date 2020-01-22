#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(610, 910, 640, "zeros");
	double ***A = create_three_dim_double(20, 840, 510, "zeros");

	for (int a = 5; a < 15; a++)
	{
	  
	    B[a][a][a]=B[a][a-4][a-5]-A[a][a][a];
	  
	    A[a][a][a]=A[a-1][a-4][a-3]+0.989;
	  
	    B[a][a][a]=B[a+3][a][a+3]/0.446;
	  
	    A[a][a][a]=A[a+5][a+2][a+5]/0.047;
	}

    return 0;
}