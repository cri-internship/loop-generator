#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(860, "zeros");
	int **C = create_two_dim_int(770, 250, "zeros");
	int ***A = create_three_dim_int(250, 20, 610, "zeros");

	for (int a = 5; a < 766; a++)
	{
	  
	    C[a][a]=28;
	    C[a-3][a-1]=46;
	  
	    B[a]=10;
	    B[a-4]=2;
	  
	    int var_a=B[a]*33;
	    int var_b=B[a]-35;
	  
	    int var_c=C[a][a]*26;
	    int var_d=C[a][a+4]*15;
	  
	    B[a]=C[a][a]+A[a][a][a]*B[a];
	    A[a][a][a]=C[a-1][a-5]/A[a][a][a];
	}

    return 0;
}