#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(590, "zeros");
	int ***B = create_three_dim_int(140, 380, 690, "zeros");

	for (int a = 3; a < 135; a++)
	{
	  
	    B[a][a][a]=B[a][a+5][a+1]-A[a];
	  
	    B[a][a][a]=10;
	  
	    A[a]=B[a][a][a];
	    A[a-2]=B[a][a][a];
	  
	    B[a][a][a]=A[a]+24;
	}

    return 0;
}