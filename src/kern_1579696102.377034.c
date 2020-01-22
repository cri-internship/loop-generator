#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(290, 260, 720, "zeros");
	int ***D = create_three_dim_int(970, 330, 480, "zeros");
	int *A = create_one_dim_int(850, "zeros");
	int *C = create_one_dim_int(510, "zeros");

	for (int a = 4; a < 285; a++)
	{
	  
	    C[a]=C[a-1]/B[a][a][a]-D[a][a][a];
	  
	    B[a][a][a]=B[a][a+3][a+5]+16;
	  
	    C[a]=A[a]*A[a]/B[a][a][a];
	  
	    D[a][a][a]=C[a]*B[a][a][a]-D[a][a][a]/A[a];
	    C[a]=C[a]+A[a]*D[a][a][a];
	  
	    B[a][a][a]=C[a]-D[a][a][a]+A[a];
	    A[a]=C[a+1]/0;
	  
	    int var_a=C[a]*40;
	    int var_b=C[a-4]-48;
	}

    return 0;
}