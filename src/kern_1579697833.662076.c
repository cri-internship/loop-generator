#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(690, 380, "ones");
	int *C = create_one_dim_int(720, "ones");
	int *B = create_one_dim_int(130, "ones");

	for (int a = 1; a < 130; a++)
	{
	  
	    B[a]=B[a-1]+21;
	  
	    A[a][a]=A[a+2][a+3]*17;
	  
	    C[a]=C[a+4]+B[a]-B[a];
	  
	    C[a]=9;
	  
	    int var_a=C[a]-14;
	  
	    int var_c=A[a][a]+16;
	    int var_d=A[a+2][a]+24;
	}

    return 0;
}