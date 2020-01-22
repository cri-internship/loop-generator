#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(430, 650, 700, "random");
	int **A = create_two_dim_int(140, 160, "random");
	int **E = create_two_dim_int(220, 190, "random");
	int **D = create_two_dim_int(980, 370, "random");
	int ***B = create_three_dim_int(140, 110, 970, "random");

	for (int a = 4; a < 136; a++)
	{
	  
	    D[a][a]=D[a-1][a-4]-9;
	  
	    A[a][a]=A[a+4][a+2]-14;
	  
	    C[a][a][a]=49;
	    C[a+2][a+2][a+2]=B[a][a][a]/A[a][a];
	}

    return 0;
}