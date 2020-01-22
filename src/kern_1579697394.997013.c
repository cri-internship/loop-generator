#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(320, 530, "random");
	int **D = create_two_dim_int(580, 150, "random");
	int **A = create_two_dim_int(510, 20, "random");
	int ***B = create_three_dim_int(880, 220, 780, "random");

	for (int a = 3; a < 320; a++)
	{
	  
	    D[a][a]=D[a+5][a+2]*B[a][a][a]+A[a][a];
	  
	    C[a][a]=D[a][a]-D[a][a];
	    C[a-2][a-1]=4-B[a][a][a];
	  
	    int var_a=C[a][a]/49;
	    int var_b=C[a-3][a-1]+18;
	}

    return 0;
}