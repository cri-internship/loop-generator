#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(890, "zeros");
	int *B = create_one_dim_int(390, "zeros");
	int *A = create_one_dim_int(170, "zeros");

	for (int a = 4; a < 165; a++)
	{
	  
	    A[a]=A[a-1]/B[a];
	  
	    C[a]=C[a-4]*41;
	  
	    A[a]=A[a-2]/C[a];
	  
	    A[a]=A[a+5]*C[a]/B[a];
	  
	    B[a]=A[a]-C[a];
	    B[a+2]=1;
	  
	    B[a]=29;
	  
	    int var_a=B[a]-43;
	}

    return 0;
}