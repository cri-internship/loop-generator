#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(460, 270, "random");
	int ***C = create_three_dim_int(710, 900, 700, "random");
	int *B = create_one_dim_int(300, "random");

	for (int a = 1; a < 298; a++)
	{
	  
	    A[a][a]=A[a-1][a]+45*B[a];
	  
	    B[a]=10;
	    B[a+2]=48;
	  
	    C[a][a][a]=C[a][a][a]*33;
	    A[a][a]=C[a+4][a+4][a+4]*B[a];
	  
	    B[a]=B[a]-C[a][a][a];
	}

    return 0;
}