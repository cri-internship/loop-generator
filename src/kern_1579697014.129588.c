#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(540, 640, 430, "random");
	int **A = create_two_dim_int(270, 650, "random");
	int **B = create_two_dim_int(660, 170, "random");

	for (int a = 5; a < 268; a++)
	{
	  
	    C[a][a][a]=C[a-2][a][a-4]+40;
	  
	    C[a][a][a]=C[a-5][a-4][a-2]+24;
	  
	    B[a][a]=B[a-1][a-3]/7;
	  
	    C[a][a][a]=C[a+5][a+3][a+4]-B[a][a]/B[a][a];
	  
	    int var_a=A[a][a]*36;
	    int var_b=A[a+1][a+2]*47;
	}

    return 0;
}