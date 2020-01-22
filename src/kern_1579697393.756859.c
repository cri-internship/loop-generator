#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(860, "zeros");
	int *C = create_one_dim_int(110, "zeros");
	int *A = create_one_dim_int(780, "zeros");

	for (int a = 4; a < 778; a++)
	{
	  
	    B[a]=B[a-1]/49;
	  
	    A[a]=A[a+1]*15;
	  
	    B[a]=49;
	  
	    int var_a=A[a]*12;
	    int var_b=A[a+2]/15;
	  
	    int var_c=B[a]*43;
	    int var_d=B[a+4]+45;
	}

    return 0;
}