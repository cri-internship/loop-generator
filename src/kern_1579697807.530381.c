#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(600, 950, 370, "random");
	double ***B = create_three_dim_double(790, 310, 480, "random");
	double ***C = create_three_dim_double(890, 800, 570, "random");

	for (int a = 4; a < 595; a++)
	{
	  
	    B[a][a][a]=B[a+3][a+5][a]-0.646;
	  
	    A[a][a][a]=0.294;
	    A[a+4][a+4][a+2]=0.108;
	  
	    B[a][a][a]=0.141;
	  
	    A[a][a][a]=C[a][a][a];
	  
	    C[a][a][a]=A[a][a][a]/C[a][a][a];
	    A[a][a][a]=A[a][a+5][a+1]-0.249;
	}

    return 0;
}