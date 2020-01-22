#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(510, 550, 700, "random");
	int ***A = create_three_dim_int(10, 820, 530, "random");
	int *B = create_one_dim_int(910, "random");
	int ***E = create_three_dim_int(710, 270, 420, "random");
	int *C = create_one_dim_int(780, "random");

	for (int a = 5; a < 10; a++)
	{
	  
	    A[a][a][a]=A[a][a-4][a-2]/3;
	  
	    A[a][a][a]=A[a-4][a-1][a-5]-32;
	  
	    B[a]=C[a]/A[a][a][a];
	    B[a+3]=D[a][a][a]-D[a][a][a]/C[a];
	  
	    D[a][a][a]=20;
	    D[a-4][a-5][a]=6;
	  
	    int var_a=E[a][a][a]-9;
	    int var_b=E[a+5][a+5][a+4]-9;
	  
	    int var_c=E[a][a][a]+16;
	    int var_d=E[a+5][a+1][a+5]-18;
	}

    return 0;
}