#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(530, 640, 510, "ones");
	int *C = create_one_dim_int(600, "ones");
	int **A = create_two_dim_int(480, 60, "ones");
	int **D = create_two_dim_int(940, 130, "ones");
	int **B = create_two_dim_int(450, 800, "ones");

	for (int a = 2; a < 445; a++)
	{
	  
	    D[a][a]=D[a+5][a+5]+18;
	  
	    C[a]=C[a+1]+35;
	  
	    D[a][a]=D[a+4][a+2]-14;
	  
	    A[a][a]=C[a]*11;
	    A[a-1][a-2]=B[a][a];
	  
	    A[a][a]=B[a][a]*D[a][a];
	    B[a][a]=B[a+1][a+5]-A[a][a]/50;
	  
	    int var_a=C[a]-49;
	    int var_b=C[a+3]/15;
	}

    return 0;
}