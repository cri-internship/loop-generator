#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(110, 280, 780, "ones");
	double *B = create_one_dim_double(880, "ones");

	for (int a = 5; a < 110; a++)
	{
	  
	    B[a]=B[a-2]*0.599;
	  
	    B[a]=B[a-5]+0.206;
	  
	    B[a]=B[a+2]*0.293;
	  
	    B[a]=B[a+4]/0.92;
	  
	    B[a]=A[a][a][a]+B[a];
	    A[a][a][a]=A[a-2][a][a]/B[a];
	}

    return 0;
}