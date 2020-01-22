#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(770, 690, 770, "random");
	int *A = create_one_dim_int(690, "random");

	for (int a = 2; a < 690; a++)
	{
	  
	    A[a]=41;
	    float  var_a=A[a]*2;
	  
	    B[a][a][a]=B[a+3][a+1][a+3]/35;
	  
	    B[a][a][a]=B[a][a+3][a+5]+36;
	  
	    A[a]=12;
	}

    return 0;
}