#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(720, 370, 730, "zeros");
	int **A = create_two_dim_int(150, 300, "zeros");
	int ***D = create_three_dim_int(810, 290, 860, "zeros");
	int **C = create_two_dim_int(210, 700, "zeros");

	for (int a = 4; a < 146; a++)
	{
	  
	    C[a][a]=C[a][a+1]-3;
	  
	    B[a][a][a]=B[a+1][a+1][a+1]+C[a][a];
	  
	    A[a][a]=A[a+4][a+3]+B[a][a][a]-D[a][a][a]/B[a][a][a];
	  
	    B[a][a][a]=28;
	}

    return 0;
}