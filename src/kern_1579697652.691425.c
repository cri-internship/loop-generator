#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(180, 630, 230, "ones");
	int *C = create_one_dim_int(830, "ones");
	int *B = create_one_dim_int(430, "ones");
	int ***A = create_three_dim_int(910, 50, 460, "ones");

	for (int a = 5; a < 180; a++)
	{
	  
	    B[a]=B[a-5]-10;
	  
	    B[a]=B[a+2]-48;
	  
	    C[a]=C[a+3]*10;
	  
	    int var_a=D[a][a][a]/21;
	    int var_b=D[a][a-4][a-1]+48;
	  
	    D[a][a][a]=D[a][a][a]*A[a][a][a];
	    C[a]=D[a-5][a-2][a-4]-C[a];
	  
	    A[a][a][a]=C[a]*D[a][a][a]/B[a];
	    B[a]=C[a-4]*50;
	}

    return 0;
}