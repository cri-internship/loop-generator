#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(130, "ones");
	int **D = create_two_dim_int(890, 90, "ones");
	int *A = create_one_dim_int(370, "ones");
	int *E = create_one_dim_int(430, "ones");
	int **C = create_two_dim_int(310, 260, "ones");

	for (int a = 5; a < 126; a++)
	{
	  
	    C[a][a]=C[a-1][a-3]*24;
	  
	    E[a]=E[a+2]/10;
	  
	    int var_a=E[a]-8;
	    int var_b=E[a-1]-12;
	  
	    int var_c=D[a][a]+47;
	    int var_d=D[a-5][a-1]+21;
	  
	    int var_e=B[a]/17;
	    int var_f=B[a+4]+25;
	  
	    D[a][a]=E[a]/A[a];
	    A[a]=E[a-5]*D[a][a]/34;
	}

    return 0;
}