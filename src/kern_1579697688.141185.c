#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(960, 20, "ones");
	int **B = create_two_dim_int(340, 920, "ones");

	for (int a = 0; a < 336; a++)
	{
	  
	    A[a][a]=A[a+5][a+4]*8;
	  
	    A[a][a]=B[a][a]+A[a][a];
	    B[a][a]=B[a+4][a+2]-A[a][a];
	}

    return 0;
}