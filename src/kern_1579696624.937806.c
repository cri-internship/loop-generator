#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(190, "random");
	int **E = create_two_dim_int(170, 640, "random");
	int **C = create_two_dim_int(940, 380, "random");
	int **B = create_two_dim_int(210, 960, "random");
	int ***D = create_three_dim_int(530, 670, 90, "random");

	for (int a = 5; a < 190; a++)
	{
	  
	    A[a]=A[a-2]*44;
	  
	    D[a][a][a]=38;
	    D[a-1][a][a]=39;
	  
	    D[a][a][a]=31-B[a][a];
	  
	    int var_a=D[a][a][a]+20;
	    int var_b=D[a-4][a-5][a]*31;
	  
	    int var_c=A[a]/1;
	    int var_d=A[a]+25;
	  
	    A[a]=D[a][a][a]-A[a]*C[a][a];
	    B[a][a]=D[a-5][a-3][a-5]*C[a][a]/B[a][a]-E[a][a]+A[a];
	}

    return 0;
}