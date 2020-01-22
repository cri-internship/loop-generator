#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(560, 750, "random");
	int **B = create_two_dim_int(80, 300, "random");
	int ***D = create_three_dim_int(550, 600, 910, "random");
	int **C = create_two_dim_int(300, 130, "random");

	for (int a = 4; a < 295; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-1][a]+4;
	  
	    A[a][a]=A[a+2][a]+B[a][a]*C[a][a]/D[a][a][a];
	  
	    C[a][a]=C[a+3][a+3]+35;
	  
	    A[a][a]=B[a][a]+D[a][a][a]/C[a][a];
	  
	    C[a][a]=20;
	  
	    int var_a=D[a][a][a]/25;
	    int var_b=D[a-4][a-4][a-3]*46;
	}

    return 0;
}