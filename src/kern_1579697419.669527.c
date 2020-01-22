#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(440, 980, 590, "ones");
	int ***A = create_three_dim_int(390, 180, 280, "ones");
	int *B = create_one_dim_int(790, "ones");
	int ***C = create_three_dim_int(210, 760, 920, "ones");

	for (int a = 5; a < 209; a++)
	{
	  
	    A[a][a][a]=A[a][a][a-5]-39;
	  
	    D[a][a][a]=20;
	    D[a-2][a][a-5]=30;
	  
	    A[a][a][a]=22;
	  
	    D[a][a][a]=A[a][a][a]-C[a][a][a]/35;
	    C[a][a][a]=A[a-3][a-5][a]/B[a];
	  
	    int var_a=C[a][a][a]/47;
	    int var_b=C[a+1][a+1][a]+23;
	  
	    int var_c=A[a][a][a]+2;
	    int var_d=A[a][a-5][a-3]-48;
	}

    return 0;
}