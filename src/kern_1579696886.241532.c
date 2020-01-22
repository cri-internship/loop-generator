#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(700, 220, 540, "random");
	int ***C = create_three_dim_int(620, 350, 830, "random");
	int ***B = create_three_dim_int(190, 640, 140, "random");
	int ***E = create_three_dim_int(90, 240, 970, "random");
	int *D = create_one_dim_int(220, "random");

	for (int a = 4; a < 620; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-4][a-1]+25-A[a][a][a];
	}

    return 0;
}