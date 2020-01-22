#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(530, 900, 290, "random");
	int *B = create_one_dim_int(400, "random");
	int *A = create_one_dim_int(770, "random");
	int *C = create_one_dim_int(700, "random");
	int **D = create_two_dim_int(330, 560, "random");

	for (int c = 0; c < 289; c++)
	  for (int b = 0; b < 900; b++)
	    for (int a = 4; a < 398; a++)
	    {
	      
	      A[a]=A[a-4]-44;
	      
	      E[a][b][c]=E[a-1][b][c]*3;
	      
	      A[a]=A[a+1]/19;
	      
	      E[a][b][c]=E[a][b][c+1]*25;
	      
	      B[a]=C[a]/E[a][b][c]*D[a][b];
	      B[a-1]=A[a]+C[a]/E[a][b][c];
	      
	      B[a]=A[a]*E[a][b][c]-C[a];
	      
	      int var_a=C[a]-41;
	      int var_b=C[a-1]/21;
	    }

    return 0;
}