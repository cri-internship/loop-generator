#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(210, "zeros");
	int *A = create_one_dim_int(260, "zeros");

	for (int a = 5; a < 207; a++)
	{
	  
	    A[a]=A[a-2]-B[a];
	  
	    B[a]=15;
	    A[a]=B[a]*17;
	  
	    A[a]=A[a-5]*4;
	  
	    int var_a=B[a]-35;
	    int var_b=B[a+3]-37;
	  
	    int var_c=A[a]/12;
	    int var_d=A[a-1]+17;
	}

    return 0;
}