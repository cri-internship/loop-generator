#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(660, 110, 170, "random");
	int **C = create_two_dim_int(190, 650, "random");
	int ***A = create_three_dim_int(240, 800, 840, "random");
	int *B = create_one_dim_int(10, "random");

	for (int a = 3; a < 235; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-3][a]/B[a]+D[a][a][a]*C[a][a];
	  
	    A[a][a][a]=A[a+1][a+5][a+2]-19;
	  
	    D[a][a][a]=D[a+2][a][a+4]+10;
	  
	    A[a][a][a]=A[a+3][a+1][a+5]-29;
	  
	    int var_a=D[a][a][a]*27;
	    int var_b=D[a+3][a+5][a+4]-40;
	}

    return 0;
}