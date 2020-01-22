#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(390, 380, 370, "ones");
	int ***C = create_three_dim_int(700, 620, 200, "ones");
	int *B = create_one_dim_int(50, "ones");

	for (int a = 4; a < 48; a++)
	{
	  
	    A[a][a][a]=A[a-3][a][a]-B[a]*C[a][a][a];
	  
	    B[a]=B[a+2]-10;
	  
	    A[a][a][a]=C[a][a][a]/B[a];
	  
	    C[a][a][a]=A[a][a][a]+B[a];
	    C[a-1][a-4][a-1]=B[a];
	}

    return 0;
}