#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(670, 220, 540, "ones");
	double **A = create_two_dim_double(470, 900, "ones");
	double **B = create_two_dim_double(460, 780, "ones");

	for (int a = 5; a < 460; a++)
	{
	  
	    B[a][a]=B[a-4][a-4]/0.823;
	  
	    C[a][a][a]=0.791;
	    C[a][a-3][a-5]=0.528;
	  
	    C[a][a][a]=A[a][a]/B[a][a];
	    B[a][a]=A[a+1][a]*0.347;
	}

    return 0;
}