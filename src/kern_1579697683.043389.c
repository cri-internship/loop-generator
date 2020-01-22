#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(870, "random");
	int *B = create_one_dim_int(410, "random");

	for (int a = 5; a < 408; a++)
	{
	  
	    A[a]=A[a-5]/41;
	  
	    float  var_a=A[a]-16;
	  
	    B[a]=B[a+1]+43;
	  
	    B[a]=B[a+2]*26;
	  
	    A[a]=A[a+3]+24;
	  
	    int var_b=A[a]/21;
	    int var_c=A[a-1]-19;
	}

    return 0;
}