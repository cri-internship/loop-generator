#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(530, "ones");
	int ***C = create_three_dim_int(640, 880, 70, "ones");
	int ***A = create_three_dim_int(420, 750, 290, "ones");

	for (int a = 5; a < 416; a++)
	{
	  
	    C[a][a][a]=C[a+2][a][a]/28;
	  
	    C[a][a][a]=C[a+1][a+3][a+1]*B[a];
	  
	    A[a][a][a]=A[a+4][a+1][a+4]+8;
	  
	    B[a]=C[a][a][a]+A[a][a][a];
	    B[a]=C[a][a][a];
	  
	    A[a][a][a]=44;
	}

    return 0;
}