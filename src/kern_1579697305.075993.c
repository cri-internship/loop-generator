#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(310, 20, 850, "ones");
	int ***B = create_three_dim_int(280, 450, 570, "ones");
	int *A = create_one_dim_int(850, "ones");
	int **D = create_two_dim_int(880, 130, "ones");
	int **C = create_two_dim_int(390, 550, "ones");

	for (int a = 2; a < 306; a++)
	{
	  
	    E[a][a][a]=B[a][a][a];
	    E[a][a][a]=E[a][a][a]+D[a][a]-A[a]/C[a][a];
	  
	    D[a][a]=33;
	    D[a][a+2]=18;
	  
	    C[a][a]=E[a][a][a];
	    C[a][a-2]=A[a]/D[a][a];
	  
	    int var_a=E[a][a][a]+20;
	    int var_b=E[a+4][a+1][a+2]*7;
	  
	    B[a][a][a]=A[a]/C[a][a]*D[a][a];
	    C[a][a]=A[a+5]/C[a][a]+B[a][a][a]*E[a][a][a]-D[a][a];
	}

    return 0;
}