#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(80, 150, "zeros");
	int *E = create_one_dim_int(240, "zeros");
	int ***A = create_three_dim_int(530, 270, 870, "zeros");
	int **C = create_two_dim_int(940, 860, "zeros");
	int *B = create_one_dim_int(520, "zeros");

	for (int c = 3; c < 870; c++)
	  for (int b = 5; b < 146; b++)
	    for (int a = 5; a < 77; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-5][c-3]+35;
	      
	      D[a][b]=D[a-5][b-1]*30;
	      
	      C[a][b]=C[a-2][b-3]*15;
	      
	      D[a][b]=D[a+3][b+4]+C[a][b]*A[a][b][c]/E[a]-A[a][b][c];
	      
	      B[a]=D[a][b]/29-E[a];
	      B[a+4]=12/D[a][b];
	      
	      int var_a=C[a][b]+48;
	      int var_b=C[a-4][b-2]+27;
	    }

    return 0;
}