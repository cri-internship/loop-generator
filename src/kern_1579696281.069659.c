#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(730, 400, "zeros");
	int *D = create_one_dim_int(420, "zeros");
	int ***B = create_three_dim_int(80, 50, 460, "zeros");
	int *E = create_one_dim_int(410, "zeros");
	int *A = create_one_dim_int(220, "zeros");

	for (int a = 4; a < 80; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-1][a]*E[a]+D[a]/A[a]-C[a][a];
	  
	    int var_a=E[a]+28;
	    E[a]=37;
	  
	    A[a]=B[a][a][a]*D[a];
	    A[a]=E[a]/D[a];
	  
	    D[a]=34;
	    D[a+2]=49;
	}

    return 0;
}