#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(940, 940, 110, "zeros");
	int *B = create_one_dim_int(910, "zeros");
	int ***C = create_three_dim_int(790, 30, 60, "zeros");

	for (int a = 5; a < 790; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-4][a-3]*40;
	  
	    A[a][a][a]=A[a-5][a-4][a]*20;
	  
	    C[a][a][a]=C[a-1][a-1][a-4]*A[a][a][a];
	  
	    B[a]=B[a+5]/C[a][a][a]+A[a][a][a];
	  
	    int var_a=C[a][a][a]+49;
	    int var_b=C[a][a-1][a-4]-13;
	  
	    C[a][a][a]=C[a][a][a]-B[a];
	    A[a][a][a]=C[a][a-3][a-1]/A[a][a][a];
	  
	    int var_c=A[a][a][a]*16;
	    int var_d=A[a][a-1][a]-27;
	}

    return 0;
}