#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(460, "zeros");
	int *B = create_one_dim_int(70, "zeros");
	int *A = create_one_dim_int(430, "zeros");
	int **C = create_two_dim_int(790, 660, "zeros");
	int ***D = create_three_dim_int(170, 440, 760, "zeros");

	for (int c = 0; c < 759; c++)
	  for (int b = 0; b < 438; b++)
	    for (int a = 0; a < 66; a++)
	    {
	      
	      B[a]=B[a+4]*A[a]/E[a]+D[a][b][c]-C[a][b];
	      
	      B[a]=24;
	      
	      A[a]=39+D[a][b][c];
	      A[a]=D[a][b][c]+C[a][b];
	      
	      D[a][b][c]=D[a][b][c]+A[a]-B[a]/5*E[a];
	      E[a]=D[a+4][b+2][c+1]+B[a]-E[a]*26/A[a];
	    }

    return 0;
}