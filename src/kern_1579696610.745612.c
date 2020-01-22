#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(210, "zeros");
	int *B = create_one_dim_int(540, "zeros");
	int *C = create_one_dim_int(580, "zeros");
	int **D = create_two_dim_int(740, 350, "zeros");
	int *E = create_one_dim_int(800, "zeros");

	for (int c = 4; c < 350; c++)
	  for (int b = 4; b < 210; b++)
	    for (int a = 4; a < 210; a++)
	    {
	      
	      B[a]=B[a-4]-A[a]*D[a][b];
	      
	      A[a]=A[a-2]/E[a]+C[a]-B[a]*E[a];
	      
	      D[a][b]=C[a]/B[a]*E[a]-A[a];
	      D[a-4][b-4]=E[a]-C[a]+B[a]*A[a];
	      
	      A[a]=D[a][b]*B[a];
	      
	      C[a]=29;
	      C[a-2]=7;
	    }

    return 0;
}