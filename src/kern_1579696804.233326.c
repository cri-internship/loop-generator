#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(720, "ones");
	int ***D = create_three_dim_int(450, 280, 690, "ones");
	int ***A = create_three_dim_int(630, 910, 210, "ones");
	int *E = create_one_dim_int(590, "ones");
	int *B = create_one_dim_int(690, "ones");

	for (int a = 5; a < 447; a++)
	{
	  
	    C[a]=C[a-2]/29*B[a];
	  
	    A[a][a][a]=A[a-5][a-2][a-5]/D[a][a][a];
	  
	    A[a][a][a]=A[a+2][a+1][a+4]-C[a]*42;
	  
	    D[a][a][a]=D[a+3][a+2][a+1]*2;
	  
	    A[a][a][a]=A[a+5][a+1][a+3]*27;
	  
	    D[a][a][a]=43;
	  
	    B[a]=C[a]+A[a][a][a]/E[a]*D[a][a][a]-B[a];
	    D[a][a][a]=C[a+5]-B[a];
	}

    return 0;
}