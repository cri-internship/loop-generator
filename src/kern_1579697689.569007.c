#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(640, "ones");
	int *E = create_one_dim_int(960, "ones");
	int **C = create_two_dim_int(50, 580, "ones");
	int ***D = create_three_dim_int(720, 540, 600, "ones");
	int *B = create_one_dim_int(930, "ones");

	for (int a = 5; a < 716; a++)
	{
	  
	    D[a][a][a]=D[a][a-2][a-5]-42;
	  
	    B[a]=B[a+5]+D[a][a][a]-E[a]*A[a]/C[a][a];
	  
	    D[a][a][a]=D[a][a+2][a+4]-B[a]/A[a]*E[a]+B[a];
	  
	    E[a]=E[a+1]+41;
	  
	    E[a]=D[a][a][a]-C[a][a]*A[a]+E[a]/B[a];
	    D[a][a][a]=D[a][a][a+1]-E[a]+20*B[a];
	}

    return 0;
}