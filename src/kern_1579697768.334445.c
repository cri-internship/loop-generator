#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(210, "ones");
	int **C = create_two_dim_int(290, 390, "ones");
	int ***E = create_three_dim_int(480, 870, 890, "ones");
	int ***B = create_three_dim_int(410, 190, 280, "ones");
	int ***A = create_three_dim_int(810, 350, 860, "ones");

	for (int a = 0; a < 210; a++)
	{
	  
	    A[a][a][a]=A[a+2][a+5][a]+12;
	  
	    D[a]=13;
	    D[a]=50;
	  
	    int var_a=C[a][a]-50;
	    int var_b=C[a+3][a+4]*50;
	  
	    A[a][a][a]=E[a][a][a]-7*B[a][a][a];
	    D[a]=E[a+5][a+5][a+1]+C[a][a]*D[a]-D[a]/B[a][a][a];
	  
	    int var_c=A[a][a][a]+14;
	    int var_d=A[a+5][a+1][a+3]*19;
	}

    return 0;
}