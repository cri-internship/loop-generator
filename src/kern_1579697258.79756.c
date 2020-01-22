#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(190, 290, 860, "zeros");
	int **A = create_two_dim_int(100, 160, "zeros");
	int *B = create_one_dim_int(170, "zeros");

	for (int a = 5; a < 95; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-4][a]-18;
	  
	    B[a]=B[a+5]/23;
	  
	    B[a]=44;
	  
	    C[a][a][a]=C[a+4][a+4][a+3]-45;
	  
	    B[a]=A[a][a]*B[a];
	    A[a][a]=A[a+5][a+1]-C[a][a][a]+B[a];
	}

    return 0;
}