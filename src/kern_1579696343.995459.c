#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(20, 910, 640, "random");
	int ***A = create_three_dim_int(320, 230, 10, "random");
	int *B = create_one_dim_int(20, "random");

	for (int a = 5; a < 20; a++)
	{
	  
	    B[a]=B[a-3]/A[a][a][a]+C[a][a][a];
	  
	    A[a][a][a]=A[a-2][a-1][a]*26;
	  
	    C[a][a][a]=B[a]-A[a][a][a];
	    C[a-5][a-4][a-3]=B[a]+A[a][a][a];
	  
	    int var_a=B[a]/5;
	    int var_b=B[a-1]*1;
	  
	    C[a][a][a]=B[a]*A[a][a][a]+C[a][a][a];
	    B[a]=B[a-5]-C[a][a][a]+A[a][a][a];
	  
	    int var_c=A[a][a][a]-42;
	    int var_d=A[a-1][a-1][a-3]-26;
	}

    return 0;
}