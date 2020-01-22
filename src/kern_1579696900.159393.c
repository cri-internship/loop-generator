#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(850, 250, 260, "zeros");
	int ***B = create_three_dim_int(40, 190, 50, "zeros");
	int **D = create_two_dim_int(650, 70, "zeros");
	int *C = create_one_dim_int(220, "zeros");

	for (int a = 5; a < 40; a++)
	{
	  
	    D[a][a]=D[a-5][a]-43;
	  
	    D[a][a]=D[a+3][a+3]/34*A[a][a][a];
	  
	    A[a][a][a]=26;
	    A[a+4][a+2][a+2]=0;
	  
	    B[a][a][a]=D[a][a];
	    B[a][a-4][a-1]=C[a];
	}

    return 0;
}