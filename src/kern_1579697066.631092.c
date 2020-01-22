#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(950, 720, 520, "random");
	int ***B = create_three_dim_int(870, 190, 910, "random");

	for (int a = 4; a < 945; a++)
	{
	  
	    A[a][a][a]=A[a+3][a+1][a+2]*9;
	  
	    A[a][a][a]=A[a+2][a+5][a]*B[a][a][a];
	  
	    A[a][a][a]=A[a+4][a][a+2]-B[a][a][a];
	}

    return 0;
}