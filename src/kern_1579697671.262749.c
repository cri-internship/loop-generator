#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(20, 920, "zeros");
	int *B = create_one_dim_int(670, "zeros");
	int *C = create_one_dim_int(70, "zeros");
	int ***D = create_three_dim_int(390, 60, 420, "zeros");

	for (int a = 4; a < 15; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-1][a]+A[a][a]/14;
	  
	    A[a][a]=A[a+3][a+5]*7;
	  
	    A[a][a]=35;
	  
	    B[a]=20;
	    B[a+1]=40;
	  
	    B[a]=49;
	  
	    A[a][a]=C[a]+B[a]*A[a][a]/D[a][a][a];
	    C[a]=C[a]-A[a][a];
	}

    return 0;
}