#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(210, 830, 250, "ones");
	int *A = create_one_dim_int(140, "ones");
	int *B = create_one_dim_int(390, "ones");

	for (int a = 5; a < 140; a++)
	{
	  
	    C[a][a][a]=C[a][a-3][a-5]/0;
	  
	    C[a][a][a]=C[a+3][a+3][a+4]-B[a]/A[a];
	  
	    A[a]=B[a]+C[a][a][a];
	    B[a]=B[a+1]-21;
	  
	    int var_a=C[a][a][a]*42;
	    int var_b=C[a+4][a+1][a+5]-50;
	  
	    int var_c=A[a]*10;
	    int var_d=A[a-3]-28;
	}

    return 0;
}