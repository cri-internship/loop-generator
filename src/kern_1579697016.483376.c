#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(750, 280, 110, "random");
	int **A = create_two_dim_int(390, 270, "random");
	int **D = create_two_dim_int(420, 320, "random");
	int **E = create_two_dim_int(650, 390, "random");
	int ***C = create_three_dim_int(770, 360, 220, "random");

	for (int a = 0; a < 745; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+1][a+5]/A[a][a]*D[a][a]-45;
	}

    return 0;
}