#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(390, 150, 10, "ones");
	int *D = create_one_dim_int(380, "ones");
	int *A = create_one_dim_int(690, "ones");
	int **B = create_two_dim_int(350, 410, "ones");

	for (int a = 4; a < 346; a++)
	{
	  
	    C[a][a][a]=C[a-4][a-3][a-4]/D[a]*36;
	  
	    C[a][a][a]=C[a][a+3][a+5]*4;
	  
	    D[a]=29;
	    D[a-1]=1;
	  
	    B[a][a]=3;
	    B[a+4][a+4]=42;
	  
	    C[a][a][a]=C[a][a][a]-D[a]+A[a]/B[a][a];
	    B[a][a]=C[a+4][a+1][a+2]-D[a]+A[a]*B[a][a];
	}

    return 0;
}