#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(340, "zeros");
	int **C = create_two_dim_int(820, 320, "zeros");
	int **B = create_two_dim_int(260, 200, "zeros");

	for (int a = 3; a < 256; a++)
	{
	  
	    B[a][a]=B[a-1][a-2]/0;
	  
	    C[a][a]=C[a-2][a-3]*B[a][a];
	  
	    B[a][a]=B[a+2][a+2]/A[a];
	  
	    int var_a=B[a][a]-47;
	    int var_b=B[a][a+4]+25;
	  
	    B[a][a]=A[a]*C[a][a]+C[a][a];
	    A[a]=A[a-1]/C[a][a]*B[a][a];
	}

    return 0;
}