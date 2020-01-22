#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(850, "zeros");
	int *A = create_one_dim_int(280, "zeros");
	int *B = create_one_dim_int(860, "zeros");

	for (int a = 5; a < 275; a++)
	{
	  
	    C[a]=C[a-5]*A[a]-B[a];
	  
	    A[a]=A[a+4]/10;
	  
	    A[a]=A[a+5]+C[a]/C[a];
	  
	    C[a]=C[a+3]+A[a]-40;
	  
	    B[a]=19;
	    B[a+4]=20;
	}

    return 0;
}