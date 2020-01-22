#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(130, 760, "zeros");
	int *D = create_one_dim_int(160, "zeros");
	int **C = create_two_dim_int(950, 460, "zeros");
	int *B = create_one_dim_int(730, "zeros");
	int *A = create_one_dim_int(540, "zeros");

	for (int c = 3; c < 458; c++)
	  for (int b = 5; b < 129; b++)
	    for (int a = 5; a < 129; a++)
	    {
	      
	      A[a]=A[a-5]/B[a]-E[a][b];
	      
	      C[a][b]=C[a-1][b-3]-46;
	      
	      E[a][b]=E[a+1][b+4]/D[a]*C[a][b]+31;
	      
	      C[a][b]=C[a+3][b+2]/A[a];
	      
	      C[a][b]=C[a+2][b+1]-E[a][b]*B[a]+D[a]/A[a];
	      
	      D[a]=D[a+4]-36;
	    }

    return 0;
}