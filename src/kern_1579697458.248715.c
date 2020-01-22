#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(990, 260, 330, "ones");
	int *B = create_one_dim_int(680, "ones");
	int *D = create_one_dim_int(150, "ones");
	int *C = create_one_dim_int(220, "ones");

	for (int a = 4; a < 150; a++)
	{
	  
	    D[a]=D[a-4]-17+A[a][a][a]/B[a];
	  
	    A[a][a][a]=A[a+3][a+4][a+4]+D[a]-B[a]*C[a];
	  
	    C[a]=C[a+5]/15;
	  
	    C[a]=36;
	  
	    D[a]=B[a]/C[a];
	    A[a][a][a]=B[a-2]*D[a];
	}

    return 0;
}