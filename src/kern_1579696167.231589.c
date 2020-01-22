#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(250, 990, 850, "random");
	int **B = create_two_dim_int(590, 760, "random");

	for (int a = 4; a < 245; a++)
	{
	  
	    B[a][a]=B[a-1][a-4]*31;
	  
	    A[a][a][a]=A[a+2][a+2][a+4]*18;
	  
	    B[a][a]=B[a][a+3]*A[a][a][a];
	  
	    A[a][a][a]=A[a+5][a+4][a]/24;
	}

    return 0;
}