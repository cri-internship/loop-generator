#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(220, 820, 740, "ones");
	int *B = create_one_dim_int(930, "ones");

	for (int a = 0; a < 216; a++)
	{
	  
	    B[a]=B[a+4]*36;
	  
	    A[a][a][a]=A[a][a+4][a+2]-29;
	  
	    A[a][a][a]=B[a];
	}

    return 0;
}