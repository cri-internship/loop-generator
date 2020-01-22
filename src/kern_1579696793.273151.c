#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(930, 690, 240, "random");
	int *B = create_one_dim_int(400, "random");
	int **D = create_two_dim_int(510, 480, "random");
	int **C = create_two_dim_int(460, 280, "random");

	for (int a = 5; a < 400; a++)
	{
	  
	    A[a][a][a]=A[a-3][a][a-1]*41;
	  
	    A[a][a][a]=A[a-1][a-4][a-5]+D[a][a]-C[a][a]*B[a];
	  
	    D[a][a]=D[a+5][a+1]/42;
	  
	    D[a][a]=B[a]*A[a][a][a]/A[a][a][a];
	    C[a][a]=B[a-5]/D[a][a]+C[a][a]-A[a][a][a];
	  
	    int var_a=B[a]/1;
	}

    return 0;
}