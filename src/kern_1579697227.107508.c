#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(250, 340, 150, "zeros");
	int *D = create_one_dim_int(980, "zeros");
	int *B = create_one_dim_int(120, "zeros");
	int **C = create_two_dim_int(530, 450, "zeros");

	for (int c = 5; c < 450; c++)
	  for (int b = 3; b < 530; b++)
	    for (int a = 3; a < 530; a++)
	    {
	      
	      D[a]=D[a-2]+C[a][b]-B[a]*A[a][b][c];
	      
	      C[a][b]=C[a-3][b-4]-D[a]/B[a]*A[a][b][c];
	      
	      C[a][b]=C[a-1][b-5]/A[a][b][c];
	      
	      D[a]=7;
	    }

    return 0;
}