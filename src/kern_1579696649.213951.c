#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(660, 70, 520, "random");
	int ***A = create_three_dim_int(470, 820, 420, "random");
	int ***D = create_three_dim_int(630, 420, 170, "random");
	int **B = create_two_dim_int(800, 320, "random");
	int *E = create_one_dim_int(490, "random");

	for (int a = 2; a < 485; a++)
	{
	  
	    E[a]=E[a+5]-A[a][a][a];
	  
	    B[a][a]=E[a]*28+D[a][a][a]/B[a][a]-D[a][a][a];
	    E[a]=E[a-2]-22*A[a][a][a]/D[a][a][a]+B[a][a];
	}

    return 0;
}