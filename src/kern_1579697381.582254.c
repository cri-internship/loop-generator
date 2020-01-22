#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(70, "ones");
	int ***B = create_three_dim_int(500, 280, 540, "ones");
	int **C = create_two_dim_int(970, 360, "ones");
	int ***D = create_three_dim_int(290, 470, 200, "ones");

	for (int a = 5; a < 69; a++)
	{
	  
	    D[a][a][a]=D[a-2][a][a-3]/19;
	  
	    D[a][a][a]=D[a-5][a-5][a-2]/C[a][a]+15;
	  
	    D[a][a][a]=D[a+3][a+5][a+3]*22;
	  
	    B[a][a][a]=11;
	    B[a-1][a-3][a-2]=32;
	  
	    A[a]=0;
	    A[a+1]=D[a][a][a]-D[a][a][a];
	  
	    B[a][a][a]=D[a][a][a]-A[a]/C[a][a]+B[a][a][a];
	    C[a][a]=D[a][a+5][a+4]*B[a][a][a];
	}

    return 0;
}