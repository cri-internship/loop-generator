#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(150, 600, 230, "zeros");
	int *C = create_one_dim_int(800, "zeros");
	int *D = create_one_dim_int(340, "zeros");
	int **A = create_two_dim_int(30, 30, "zeros");

	for (int a = 4; a < 25; a++)
	{
	  
	    C[a]=A[a][a];
	    A[a][a]=C[a]+D[a];
	  
	    A[a][a]=A[a+1][a+5]/37;
	  
	    B[a][a][a]=A[a][a];
	    B[a][a-2][a-2]=D[a];
	  
	    D[a]=46;
	    D[a]=16;
	  
	    int var_a=A[a][a]/13;
	    int var_b=A[a+3][a+2]*42;
	}

    return 0;
}