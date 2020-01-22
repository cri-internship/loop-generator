#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(710, "ones");
	int ***A = create_three_dim_int(270, 740, 200, "ones");
	int **D = create_two_dim_int(30, 680, "ones");
	int *B = create_one_dim_int(160, "ones");

	for (int a = 5; a < 156; a++)
	{
	  
	    C[a]=1;
	    float  var_a=C[a]+50;
	  
	    C[a]=C[a-3]+18;
	  
	    A[a][a][a]=A[a-2][a-5][a-3]+38;
	  
	    B[a]=B[a+1]+10;
	  
	    A[a][a][a]=13;
	  
	    B[a]=26;
	}

    return 0;
}