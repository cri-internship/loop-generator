#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(690, 770, "random");
	int *C = create_one_dim_int(390, "random");
	int **A = create_two_dim_int(240, 520, "random");
	int **B = create_two_dim_int(420, 840, "random");
	int ***D = create_three_dim_int(510, 180, 830, "random");

	for (int a = 4; a < 390; a++)
	{
	  
	    D[a][a][a]=14;
	    D[a][a+4][a+3]=6;
	  
	    A[a][a]=C[a]/D[a][a][a]+E[a][a]*B[a][a]-A[a][a];
	    E[a][a]=C[a-4]-E[a][a]+B[a][a]*A[a][a]/D[a][a][a];
	}

    return 0;
}