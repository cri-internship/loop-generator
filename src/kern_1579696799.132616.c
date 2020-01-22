#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(810, "zeros");
	int *A = create_one_dim_int(150, "zeros");
	int ***D = create_three_dim_int(360, 870, 400, "zeros");
	int *C = create_one_dim_int(420, "zeros");
	int **B = create_two_dim_int(220, 470, "zeros");

	for (int c = 4; c < 395; c++)
	  for (int b = 5; b < 470; b++)
	    for (int a = 4; a < 150; a++)
	    {
	      
	      C[a]=C[a-4]+7;
	      
	      E[a]=E[a-3]/19;
	      
	      B[a][b]=B[a-2][b-2]/44;
	      
	      A[a]=B[a][b];
	      A[a-4]=D[a][b][c]-E[a];
	      
	      D[a][b][c]=C[a];
	      D[a+2][b+4][c+5]=A[a]+A[a]*B[a][b]-E[a];
	      
	      B[a][b]=6;
	      
	      D[a][b][c]=D[a][b][c]-A[a]+C[a]*E[a]/B[a][b];
	      B[a][b]=D[a][b-4][c-4]-C[a]/A[a]+B[a][b]*E[a];
	    }

    return 0;
}