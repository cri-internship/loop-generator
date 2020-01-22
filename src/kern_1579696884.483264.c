#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(570, 20, "zeros");
	int *A = create_one_dim_int(610, "zeros");
	int **C = create_two_dim_int(380, 70, "zeros");
	int *D = create_one_dim_int(970, "zeros");
	int **E = create_two_dim_int(10, 300, "zeros");

	for (int c = 4; c < 68; c++)
	  for (int b = 2; b < 7; b++)
	    for (int a = 2; a < 7; a++)
	    {
	      
	      C[a][b]=C[a][b-4]*22;
	      
	      A[a]=A[a-2]+44-E[a][b]*B[a][b]/D[a];
	      
	      C[a][b]=C[a+4][b+2]+A[a]-D[a]*B[a][b]/20;
	      
	      E[a][b]=E[a+3][b]-32;
	      
	      D[a]=D[a+1]+37;
	    }

    return 0;
}