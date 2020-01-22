#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(950, 710, 770, "ones");
	int **B = create_two_dim_int(820, 790, "ones");
	int ***D = create_three_dim_int(100, 950, 280, "ones");
	int *C = create_one_dim_int(10, "ones");
	int **A = create_two_dim_int(360, 10, "ones");

	for (int a = 5; a < 8; a++)
	{
	  
	    B[a][a]=B[a-4][a-4]*A[a][a]+C[a]-E[a][a][a];
	  
	    E[a][a][a]=E[a-4][a-3][a-3]-D[a][a][a]*B[a][a];
	  
	    B[a][a]=B[a+2][a+1]*A[a][a]/C[a];
	  
	    int var_a=C[a]+16;
	    int var_b=C[a+2]*40;
	  
	    int var_c=E[a][a][a]*40;
	    int var_d=E[a][a-5][a-5]-45;
	  
	    E[a][a][a]=E[a][a][a]-D[a][a][a]+19;
	    A[a][a]=E[a+2][a+3][a+1]+B[a][a]/A[a][a]*D[a][a][a];
	}

    return 0;
}