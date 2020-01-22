#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(570, "random");
	int ***C = create_three_dim_int(340, 580, 840, "random");
	int **D = create_two_dim_int(200, 50, "random");
	int **A = create_two_dim_int(70, 530, "random");
	int **B = create_two_dim_int(650, 80, "random");

	for (int a = 2; a < 70; a++)
	{
	  
	    int var_a=A[a][a]*40;
	    int var_b=A[a-2][a]-34;
	}

    return 0;
}