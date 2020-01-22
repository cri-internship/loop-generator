#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(420, "zeros");
	int **B = create_two_dim_int(810, 490, "zeros");
	int **C = create_two_dim_int(20, 910, "zeros");
	int ***A = create_three_dim_int(710, 180, 50, "zeros");

	for (int a = 5; a < 415; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-1][a-2]/8;
	  
	    B[a][a]=B[a+3][a+3]*41;
	  
	    A[a][a][a]=D[a]+A[a][a][a];
	    D[a]=34;
	  
	    A[a][a][a]=A[a+5][a][a]+17;
	  
	    int var_a=A[a][a][a]/43;
	    int var_b=A[a-5][a][a-3]/16;
	  
	    int var_c=D[a]*1;
	    int var_d=D[a+5]/12;
	  
	    C[a][a]=B[a][a]*D[a];
	    D[a]=B[a][a-3]*A[a][a][a]+D[a];
	}

    return 0;
}