#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(980, 30, 410, "ones");
	double ***D = create_three_dim_double(200, 840, 610, "ones");
	double ***C = create_three_dim_double(910, 430, 740, "ones");
	double ***B = create_three_dim_double(790, 370, 660, "ones");

	for (int a = 5; a < 790; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+1][a+1]*0.369+B[a][a][a];
	  
	    B[a][a][a]=C[a][a][a]+0.508-C[a][a][a];
	    B[a-5][a-1][a-4]=A[a][a][a];
	}

    return 0;
}