#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(850, "zeros");
	int *A = create_one_dim_int(960, "zeros");
	int *C = create_one_dim_int(420, "zeros");

	for (int a = 0; a < 845; a++)
	{
	  
	    B[a]=B[a+5]+A[a]*C[a];
	  
	    A[a]=A[a]*B[a]/B[a];
	    C[a]=A[a+3]-C[a];
	}

    return 0;
}