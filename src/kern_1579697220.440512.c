#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(230, 450, 680, "ones");
	int *A = create_one_dim_int(130, "ones");
	int ***D = create_three_dim_int(180, 810, 590, "ones");
	int ***C = create_three_dim_int(740, 50, 210, "ones");

	for (int a = 5; a < 127; a++)
	{
	  
	    A[a]=A[a+3]+C[a][a][a]*D[a][a][a]-B[a][a][a];
	  
	    D[a][a][a]=9;
	    D[a-3][a][a-3]=C[a][a][a]-A[a];
	  
	    C[a][a][a]=15;
	    C[a-1][a-2][a-1]=19;
	  
	    D[a][a][a]=7;
	  
	    int var_a=B[a][a][a]/22;
	    int var_b=B[a-5][a-3][a-3]*35;
	}

    return 0;
}