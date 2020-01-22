#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(340, 540, 90, "random");
	int **B = create_two_dim_int(480, 240, "random");
	int **E = create_two_dim_int(910, 120, "random");
	int *D = create_one_dim_int(380, "random");
	int ***C = create_three_dim_int(350, 410, 360, "random");

	for (int a = 4; a < 335; a++)
	{
	  
	    D[a]=D[a-3]-C[a][a][a]+A[a][a][a]/19;
	  
	    C[a][a][a]=C[a+5][a][a+4]*50-D[a]/A[a][a][a];
	  
	    D[a]=D[a+1]/B[a][a]+A[a][a][a]-C[a][a][a]*E[a][a];
	  
	    A[a][a][a]=E[a][a]+B[a][a]-C[a][a][a]/D[a];
	    A[a+1][a+1][a+5]=E[a][a]-B[a][a]/D[a]*C[a][a][a];
	  
	    B[a][a]=E[a][a]*A[a][a][a]+D[a]-C[a][a][a];
	    B[a-4][a]=D[a];
	}

    return 0;
}