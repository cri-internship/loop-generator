#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(160, 710, 680, "ones");
	double ***D = create_three_dim_double(960, 650, 440, "ones");
	double ***B = create_three_dim_double(790, 100, 920, "ones");
	double *C = create_one_dim_double(1000, "ones");

	for (int a = 4; a < 785; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+5][a]/0.837;
	  
	    C[a]=0.149;
	    C[a-2]=0.354;
	  
	    B[a][a][a]=0.16;
	  
	    B[a][a][a]=B[a][a][a]/C[a];
	    D[a][a][a]=B[a-4][a][a]*A[a][a][a]-0.226;
	}

    return 0;
}