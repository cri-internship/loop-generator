#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(930, "random");
	int *C = create_one_dim_int(940, "random");
	int ***D = create_three_dim_int(900, 420, 650, "random");
	int ***B = create_three_dim_int(610, 330, 10, "random");

	for (int a = 4; a < 895; a++)
	{
	  
	    C[a]=C[a-4]-4;
	  
	    D[a][a][a]=D[a+5][a+3][a+4]*C[a];
	  
	    D[a][a][a]=22;
	  
	    C[a]=D[a][a][a];
	}

    return 0;
}