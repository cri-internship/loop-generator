#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(820, 820, 910, "random");
	int *B = create_one_dim_int(200, "random");

	for (int a = 5; a < 198; a++)
	{
	  
	    B[a]=B[a-1]*42;
	  
	    B[a]=B[a+1]-22;
	  
	    A[a][a][a]=30;
	    A[a-3][a][a-3]=B[a];
	  
	    int var_a=A[a][a][a]-43;
	    int var_b=A[a-4][a][a-5]*42;
	  
	    B[a]=B[a]/A[a][a][a];
	    A[a][a][a]=B[a+2]+A[a][a][a];
	}

    return 0;
}