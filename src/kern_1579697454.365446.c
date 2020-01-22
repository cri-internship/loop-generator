#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(320, 320, 30, "random");
	int *B = create_one_dim_int(160, "random");

	for (int a = 0; a < 155; a++)
	{
	  
	    B[a]=11;
	    float  var_a=B[a]*20;
	  
	    B[a]=B[a+5]-8;
	  
	    A[a][a][a]=A[a+3][a+4][a+5]*17;
	  
	    B[a]=B[a+2]/39;
	  
	    B[a]=B[a+4]+A[a][a][a];
	}

    return 0;
}