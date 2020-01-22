#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(390, "zeros");
	int **E = create_two_dim_int(540, 170, "zeros");
	int *B = create_one_dim_int(630, "zeros");
	int ***A = create_three_dim_int(380, 820, 350, "zeros");
	int **D = create_two_dim_int(20, 430, "zeros");

	for (int c = 0; c < 349; c++)
	  for (int b = 3; b < 170; b++)
	    for (int a = 3; a < 380; a++)
	    {
	      
	      E[a][b]=E[a-2][b-3]/C[a]*A[a][b][c];
	      
	      C[a]=C[a-3]/E[a][b]+21;
	      
	      E[a][b]=E[a-1][b-3]*D[a][b]/B[a]-D[a][b]+A[a][b][c];
	      
	      int var_a=A[a][b][c]-29;
	      int var_b=A[a][b+1][c+1]-6;
	    }

    return 0;
}