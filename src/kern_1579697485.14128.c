#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(240, 680, "ones");
	double **B = create_two_dim_double(780, 780, "ones");
	double ***A = create_three_dim_double(660, 980, 110, "ones");

	for (int a = 0; a < 776; a++)
	{
	  
	    B[a][a]=0.101;
	    B[a+4][a+1]=0.524;
	}

    return 0;
}