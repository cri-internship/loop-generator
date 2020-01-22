#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(610, "zeros");
	int *A = create_one_dim_int(540, "zeros");

	for (int a = 0; a < 536; a++)
	{
	  
	    B[a]=B[a+5]-A[a];
	  
	    B[a]=10;
	  
	    int var_a=B[a]*28;
	    int var_b=B[a+4]-41;
	  
	    B[a]=A[a]/B[a];
	  
	    int var_c=A[a]+3;
	    int var_d=A[a+4]/39;
	}

    return 0;
}