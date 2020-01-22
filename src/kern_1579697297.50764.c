#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(500, "ones");
	int ***B = create_three_dim_int(580, 460, 700, "ones");
	int *C = create_one_dim_int(60, "ones");

	for (int a = 5; a < 56; a++)
	{
	  
	    A[a]=A[a-2]-48;
	  
	    C[a]=C[a-5]-A[a]+B[a][a][a];
	  
	    C[a]=C[a+4]+29;
	  
	    C[a]=C[a+3]+6;
	  
	    int var_a=A[a]/36;
	    int var_b=A[a+5]*10;
	}

    return 0;
}