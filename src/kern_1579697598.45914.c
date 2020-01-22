#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(570, 10, 600, "ones");
	int *C = create_one_dim_int(110, "ones");
	int *D = create_one_dim_int(840, "ones");
	int **A = create_two_dim_int(1000, 100, "ones");
	int *B = create_one_dim_int(50, "ones");

	for (int a = 5; a < 50; a++)
	{
	  
	    C[a]=C[a-3]-21+D[a]*E[a][a][a];
	  
	    E[a][a][a]=E[a-3][a-1][a-1]-A[a][a]/C[a]*A[a][a];
	  
	    A[a][a]=A[a-1][a-2]*28;
	  
	    E[a][a][a]=E[a+1][a+3][a+3]/D[a];
	  
	    B[a]=23;
	    B[a-3]=13;
	  
	    B[a]=A[a][a];
	}

    return 0;
}