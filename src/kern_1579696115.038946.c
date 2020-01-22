#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(250, 190, "zeros");
	int **C = create_two_dim_int(350, 80, "zeros");
	int ***A = create_three_dim_int(70, 850, 390, "zeros");
	int *D = create_one_dim_int(610, "zeros");

	for (int a = 0; a < 66; a++)
	{
	  
	    C[a][a]=C[a+1][a+2]*D[a];
	  
	    D[a]=D[a+3]/40;
	  
	    A[a][a][a]=A[a+4][a+2][a+1]*C[a][a]/B[a][a];
	  
	    D[a]=16;
	  
	    int var_a=B[a][a]*9;
	    int var_b=B[a+2][a+4]+37;
	}

    return 0;
}