#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(540, "ones");
	int **D = create_two_dim_int(990, 150, "ones");
	int ***E = create_three_dim_int(890, 660, 750, "ones");
	int *C = create_one_dim_int(310, "ones");
	int **A = create_two_dim_int(830, 510, "ones");

	for (int a = 5; a < 310; a++)
	{
	  
	    E[a][a][a]=E[a-4][a-3][a-2]+A[a][a]*D[a][a];
	  
	    C[a]=48;
	    float  var_a=C[a]/29;
	  
	    D[a][a]=D[a+4][a+4]/E[a][a][a]+C[a]-B[a];
	  
	    A[a][a]=B[a];
	    A[a+2][a+4]=B[a]-E[a][a][a];
	  
	    B[a]=C[a]*D[a][a]+A[a][a];
	    B[a+4]=E[a][a][a]+C[a]-A[a][a]*D[a][a];
	  
	    int var_b=E[a][a][a]*4;
	    int var_c=E[a+4][a+2][a+4]*42;
	  
	    C[a]=C[a]+B[a]*E[a][a][a];
	    B[a]=C[a-5]+D[a][a]/A[a][a]*E[a][a][a]-B[a];
	}

    return 0;
}