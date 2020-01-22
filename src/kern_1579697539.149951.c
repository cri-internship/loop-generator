#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(470, 550, "zeros");
	int **C = create_two_dim_int(40, 740, "zeros");
	int ***D = create_three_dim_int(770, 610, 490, "zeros");
	int *A = create_one_dim_int(590, "zeros");

	for (int a = 5; a < 40; a++)
	{
	  
	    C[a][a]=A[a];
	    B[a][a]=C[a][a]+D[a][a][a]/B[a][a];
	  
	    D[a][a][a]=D[a-4][a-5][a-5]*21;
	  
	    C[a][a]=C[a-4][a]-40;
	  
	    D[a][a][a]=D[a-5][a-5][a-5]+0;
	  
	    B[a][a]=C[a][a]/D[a][a][a]+C[a][a];
	}

    return 0;
}