#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(500, 840, 430, "zeros");
	int *C = create_one_dim_int(330, "zeros");
	int *A = create_one_dim_int(340, "zeros");

	for (int a = 5; a < 326; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-5][a-5]/29;
	  
	    B[a][a][a]=B[a-3][a-1][a-3]*C[a];
	  
	    C[a]=C[a-2]/A[a]-B[a][a][a];
	  
	    C[a]=48;
	  
	    int var_a=B[a][a][a]-44;
	    int var_b=B[a][a+5][a+1]+34;
	  
	    int var_c=A[a]-46;
	    int var_d=A[a+5]/38;
	}

    return 0;
}