#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(760, 90, 970, "random");
	int *B = create_one_dim_int(60, "random");
	int ***A = create_three_dim_int(550, 290, 950, "random");
	int **D = create_two_dim_int(930, 90, "random");

	for (int a = 3; a < 760; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-3][a-3]*B[a]/D[a][a];
	  
	    D[a][a]=D[a][a+4]/38;
	  
	    D[a][a]=D[a][a+3]-C[a][a][a];
	  
	    C[a][a][a]=1;
	}

    return 0;
}