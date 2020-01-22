#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(70, 470, "random");
	int *D = create_one_dim_int(800, "random");
	int ***C = create_three_dim_int(770, 440, 830, "random");
	int ***B = create_three_dim_int(740, 560, 420, "random");

	for (int a = 5; a < 740; a++)
	{
	  
	    B[a][a][a]=25;
	    B[a][a-5][a-2]=2;
	}

    return 0;
}