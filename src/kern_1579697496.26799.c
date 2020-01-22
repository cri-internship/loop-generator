#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(410, "ones");
	int *A = create_one_dim_int(870, "ones");
	int *D = create_one_dim_int(570, "ones");
	int ***C = create_three_dim_int(70, 490, 150, "ones");

	for (int a = 5; a < 66; a++)
	{
	  
	    C[a][a][a]=C[a][a-2][a-4]-37;
	  
	    B[a]=B[a-1]+43;
	  
	    C[a][a][a]=21;
	  
	    A[a]=0;
	    A[a+5]=11;
	}

    return 0;
}