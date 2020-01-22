#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(960, "zeros");
	int **B = create_two_dim_int(60, 760, "zeros");
	int ***C = create_three_dim_int(170, 210, 650, "zeros");
	int *D = create_one_dim_int(730, "zeros");
	int *E = create_one_dim_int(650, "zeros");

	for (int a = 5; a < 648; a++)
	{
	  
	    E[a]=E[a-4]/C[a][a][a]+D[a];
	  
	    E[a]=E[a+2]+14;
	  
	    int var_a=A[a]+36;
	    A[a]=4;
	  
	    D[a]=20;
	    D[a-1]=7;
	  
	    A[a]=29;
	}

    return 0;
}