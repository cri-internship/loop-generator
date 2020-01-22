#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(400, 690, "zeros");
	int *A = create_one_dim_int(70, "zeros");
	int *D = create_one_dim_int(20, "zeros");
	int **B = create_two_dim_int(580, 470, "zeros");

	for (int a = 5; a < 67; a++)
	{
	  
	    A[a]=B[a][a]+D[a];
	    A[a+3]=C[a][a]/D[a];
	  
	    A[a]=C[a][a]-A[a];
	    C[a][a]=C[a-3][a-5]/A[a];
	}

    return 0;
}