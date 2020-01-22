#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(20, "ones");
	int **C = create_two_dim_int(100, 960, "ones");
	int ***A = create_three_dim_int(110, 430, 70, "ones");
	int **B = create_two_dim_int(750, 750, "ones");

	for (int a = 5; a < 15; a++)
	{
	  
	    D[a]=43/A[a][a][a]*C[a][a];
	    D[a+3]=B[a][a]-C[a][a]+A[a][a][a];
	  
	    int var_a=A[a][a][a]*3;
	    int var_b=A[a+5][a+3][a+4]+8;
	  
	    int var_c=A[a][a][a]-30;
	    int var_d=A[a-2][a-5][a-5]*43;
	  
	    B[a][a]=A[a][a][a]+D[a];
	    A[a][a][a]=A[a-3][a-3][a]+B[a][a]/6;
	  
	    C[a][a]=D[a]-B[a][a]*C[a][a]/A[a][a][a];
	    D[a]=D[a+5]-A[a][a][a];
	}

    return 0;
}