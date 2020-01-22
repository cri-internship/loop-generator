#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(260, 460, 970, "random");
	int *A = create_one_dim_int(360, "random");
	int *D = create_one_dim_int(500, "random");
	int *B = create_one_dim_int(290, "random");

	for (int a = 4; a < 289; a++)
	{
	  
	    A[a]=A[a+4]*24;
	  
	    D[a]=D[a+2]-45;
	  
	    A[a]=B[a]-3;
	    B[a]=B[a-4]*A[a]-38;
	  
	    int var_a=B[a]/47;
	    int var_b=B[a+1]*16;
	}

    return 0;
}