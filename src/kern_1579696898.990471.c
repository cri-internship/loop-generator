#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(970, "ones");
	int *B = create_one_dim_int(940, "ones");

	for (int a = 3; a < 936; a++)
	{
	  
	    B[a]=B[a+4]+A[a];
	  
	    B[a]=A[a];
	  
	    A[a]=A[a]-B[a];
	    B[a]=A[a-3]/B[a];
	  
	    A[a]=B[a]*A[a];
	    B[a]=B[a+3]*A[a];
	  
	    B[a]=A[a]-13;
	    A[a]=A[a-2]/43;
	}

    return 0;
}