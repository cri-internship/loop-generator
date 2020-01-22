#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(240, 570, 150, "ones");
	int **D = create_two_dim_int(990, 520, "ones");
	int **B = create_two_dim_int(390, 660, "ones");
	int *E = create_one_dim_int(560, "ones");
	int *C = create_one_dim_int(590, "ones");

	for (int a = 5; a < 240; a++)
	{
	  
	    B[a][a]=B[a-1][a]*C[a]/A[a][a][a]+D[a][a];
	  
	    D[a][a]=D[a-5][a-4]+38;
	  
	    D[a][a]=D[a][a+2]/E[a]+B[a][a]-33;
	  
	    int var_a=B[a][a]+40;
	    int var_b=B[a-3][a-3]/32;
	  
	    int var_c=A[a][a][a]*42;
	    int var_d=A[a-2][a-1][a-3]-29;
	}

    return 0;
}