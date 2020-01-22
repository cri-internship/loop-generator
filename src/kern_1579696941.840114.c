#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(350, 350, 350, "ones");
	double ***C = create_three_dim_double(730, 70, 330, "ones");
	double *B = create_one_dim_double(750, "ones");

	for (int a = 0; a < 345; a++)
	{
	  
	    C[a][a][a]=C[a+2][a+5][a+4]+0.197;
	  
	    A[a][a][a]=A[a][a+1][a+5]/0.656;
	}

    return 0;
}