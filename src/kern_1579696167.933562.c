#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(60, 50, 250, "ones");
	int ***D = create_three_dim_int(140, 940, 740, "ones");
	int **C = create_two_dim_int(980, 350, "ones");
	int **E = create_two_dim_int(610, 940, "ones");
	int **A = create_two_dim_int(520, 160, "ones");

	for (int a = 4; a < 60; a++)
	{
	  
	    B[a][a][a]=B[a][a-4][a-1]*D[a][a][a];
	  
	    B[a][a][a]=9;
	  
	    E[a][a]=B[a][a][a]+A[a][a]*24;
	    E[a-1][a-1]=D[a][a][a]-A[a][a];
	  
	    A[a][a]=D[a][a][a]*20+E[a][a]-A[a][a];
	    D[a][a][a]=D[a][a-2][a-2]*C[a][a]+14;
	  
	    C[a][a]=B[a][a][a]/C[a][a];
	    E[a][a]=B[a-2][a-1][a]*C[a][a]-E[a][a]/D[a][a][a];
	  
	    int var_a=E[a][a]-43;
	    int var_b=E[a-2][a-4]*33;
	}

    return 0;
}