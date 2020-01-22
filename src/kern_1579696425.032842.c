#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(520, 430, 560, "ones");
	double ***D = create_three_dim_double(650, 550, 780, "ones");
	double ***A = create_three_dim_double(370, 300, 540, "ones");
	double ***C = create_three_dim_double(240, 10, 850, "ones");

	for (int a = 5; a < 520; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-1][a-3]+0.68;
	  
	    B[a][a][a]=B[a-5][a-2][a-3]*0.065;
	}

    return 0;
}