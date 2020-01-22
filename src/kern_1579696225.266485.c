#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(940, "zeros");
	int *C = create_one_dim_int(400, "zeros");
	int ***A = create_three_dim_int(700, 830, 340, "zeros");

	for (int a = 0; a < 398; a++)
	{
	  
	    C[a]=C[a+1]/43;
	  
	    C[a]=C[a+2]+B[a];
	  
	    C[a]=A[a][a][a]-C[a]/C[a];
	    A[a][a][a]=A[a][a+2][a]-C[a]+B[a];
	  
	    B[a]=B[a]+A[a][a][a]*A[a][a][a];
	    B[a]=B[a+1]/C[a]*A[a][a][a];
	  
	    int var_a=A[a][a][a]/13;
	    int var_b=A[a+4][a+2][a+4]-26;
	}

    return 0;
}