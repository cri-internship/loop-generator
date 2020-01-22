#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(260, 340, 400, "ones");
	int *A = create_one_dim_int(790, "ones");
	int *B = create_one_dim_int(480, "ones");

	for (int a = 5; a < 260; a++)
	{
	  
	    C[a][a][a]=38;
	    C[a-5][a-1][a-1]=30;
	  
	    int var_a=B[a]-45;
	    int var_b=B[a+2]/22;
	  
	    int var_c=B[a]-15;
	    int var_d=B[a+4]+45;
	  
	    B[a]=C[a][a][a]*A[a]-B[a];
	    A[a]=C[a-4][a-2][a-3]-A[a]*B[a];
	}

    return 0;
}