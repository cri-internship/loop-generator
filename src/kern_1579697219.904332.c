#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(850, 240, "ones");
	int *A = create_one_dim_int(390, "ones");
	int **B = create_two_dim_int(80, 920, "ones");
	int ***C = create_three_dim_int(360, 680, 820, "ones");

	for (int a = 5; a < 75; a++)
	{
	  
	    A[a]=A[a+1]+7;
	  
	    B[a][a]=34;
	    B[a+5][a+4]=9;
	  
	    C[a][a][a]=28;
	    C[a-2][a][a-4]=41;
	  
	    B[a][a]=C[a][a][a]+D[a][a];
	  
	    int var_a=D[a][a]/17;
	    int var_b=D[a-5][a-2]-33;
	  
	    int var_c=A[a]/12;
	    int var_d=A[a+4]-23;
	}

    return 0;
}