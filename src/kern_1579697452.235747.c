#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(720, 710, 340, "ones");
	int ***B = create_three_dim_int(140, 40, 980, "ones");
	int **C = create_two_dim_int(470, 850, "ones");

	for (int a = 5; a < 466; a++)
	{
	  
	    C[a][a]=C[a-4][a-2]+27;
	  
	    C[a][a]=C[a-2][a-5]/46;
	  
	    C[a][a]=C[a+3][a+4]/A[a][a][a];
	  
	    C[a][a]=C[a+2][a]/4+B[a][a][a];
	}

    return 0;
}