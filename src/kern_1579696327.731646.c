#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(950, 970, "zeros");
	int *A = create_one_dim_int(820, "zeros");
	int ***C = create_three_dim_int(940, 270, 810, "zeros");

	for (int a = 4; a < 820; a++)
	{
	  
	    A[a]=9;
	    A[a-4]=36;
	  
	    C[a][a][a]=19;
	    C[a-3][a-1][a-4]=21;
	  
	    int var_a=C[a][a][a]/9;
	    int var_b=C[a+1][a+1][a+4]/48;
	  
	    int var_c=B[a][a]*13;
	    int var_d=B[a-4][a-1]*44;
	  
	    C[a][a][a]=C[a][a][a]-A[a]+B[a][a];
	    A[a]=C[a-1][a-3][a-2]*B[a][a]+A[a];
	}

    return 0;
}