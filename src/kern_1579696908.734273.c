#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(930, 200, 200, "ones");
	int *B = create_one_dim_int(720, "ones");

	for (int a = 4; a < 720; a++)
	{
	  
	    B[a]=B[a-4]*49;
	  
	    A[a][a][a]=A[a+2][a+2][a]+B[a];
	}

    return 0;
}