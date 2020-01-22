#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(300, "random");
	int ***A = create_three_dim_int(290, 320, 240, "random");
	int ***C = create_three_dim_int(830, 780, 1000, "random");

	for (int a = 5; a < 288; a++)
	{
	  
	    C[a][a][a]=C[a-5][a][a-5]*48;
	  
	    A[a][a][a]=A[a-1][a-4][a-5]/27;
	  
	    A[a][a][a]=A[a][a-2][a]*26;
	  
	    A[a][a][a]=A[a][a-1][a-4]/C[a][a][a];
	  
	    B[a]=C[a][a][a]-A[a][a][a]+A[a][a][a];
	    C[a][a][a]=C[a-4][a-1][a-4]-A[a][a][a]+B[a];
	  
	    int var_a=A[a][a][a]/41;
	    int var_b=A[a+2][a+2][a+2]+47;
	}

    return 0;
}