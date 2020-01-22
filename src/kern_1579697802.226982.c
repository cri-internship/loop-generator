#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(440, 710, 520, "zeros");
	int ***C = create_three_dim_int(630, 50, 750, "zeros");
	int *A = create_one_dim_int(930, "zeros");

	for (int a = 4; a < 630; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-4][a-4]-6;
	  
	    A[a]=A[a-3]-26;
	  
	    A[a]=29;
	}

    return 0;
}