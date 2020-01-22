#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(790, 200, 470, "ones");
	int **A = create_two_dim_int(230, 730, "ones");
	int **B = create_two_dim_int(380, 890, "ones");
	int *C = create_one_dim_int(990, "ones");
	int **E = create_two_dim_int(10, 850, "ones");

	for (int a = 5; a < 5; a++)
	{
	  
	    A[a][a]=A[a][a-5]+26;
	  
	    D[a][a][a]=D[a][a-5][a-4]+B[a][a]*A[a][a]/C[a];
	  
	    E[a][a]=E[a][a+5]/D[a][a][a]-C[a]*A[a][a]+D[a][a][a];
	  
	    E[a][a]=45;
	  
	    D[a][a][a]=E[a][a]-50;
	    C[a]=E[a][a+1]/43;
	  
	    E[a][a]=D[a][a][a]-E[a][a]/E[a][a]+A[a][a];
	    A[a][a]=D[a+2][a+2][a+1]-A[a][a];
	}

    return 0;
}