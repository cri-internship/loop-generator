#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(90, "zeros");
	int ***B = create_three_dim_int(280, 920, 50, "zeros");
	int *A = create_one_dim_int(1000, "zeros");
	int **E = create_two_dim_int(820, 630, "zeros");
	int **C = create_two_dim_int(300, 490, "zeros");

	for (int a = 5; a < 86; a++)
	{
	  
	    A[a]=A[a-1]-B[a][a][a];
	  
	    C[a][a]=C[a][a-4]/50;
	  
	    D[a]=D[a-1]-36;
	  
	    B[a][a][a]=B[a-4][a-5][a-1]-14*E[a][a];
	  
	    C[a][a]=C[a-5][a-5]*17;
	  
	    C[a][a]=C[a+2][a+3]*D[a]/A[a];
	  
	    int var_a=D[a]*0;
	    int var_b=D[a+4]/43;
	}

    return 0;
}