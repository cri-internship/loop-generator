#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(640, 590, 210, "zeros");
	int ***D = create_three_dim_int(750, 980, 420, "zeros");
	int *C = create_one_dim_int(650, "zeros");
	int *B = create_one_dim_int(560, "zeros");

	for (int a = 5; a < 560; a++)
	{
	  
	    D[a][a][a]=D[a-2][a-3][a-5]-16;
	  
	    A[a][a][a]=A[a][a-2][a-3]*30;
	  
	    C[a]=C[a-4]*20;
	  
	    A[a][a][a]=B[a]/C[a];
	    B[a]=D[a][a][a]-A[a][a][a]*D[a][a][a];
	  
	    A[a][a][a]=A[a+5][a+2][a+3]-B[a]*C[a];
	}

    return 0;
}