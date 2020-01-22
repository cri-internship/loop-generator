#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(570, 110, 470, "ones");
	int **B = create_two_dim_int(530, 170, "ones");
	int **D = create_two_dim_int(250, 760, "ones");
	int ***C = create_three_dim_int(330, 890, 660, "ones");

	for (int a = 5; a < 250; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-5][a-5]+50;
	  
	    A[a][a][a]=A[a-3][a][a-2]/9-D[a][a]+C[a][a][a];
	  
	    D[a][a]=D[a-3][a-5]/A[a][a][a];
	}

    return 0;
}