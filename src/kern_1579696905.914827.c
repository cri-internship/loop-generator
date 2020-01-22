#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(590, 810, "ones");
	int *A = create_one_dim_int(340, "ones");
	int **E = create_two_dim_int(710, 880, "ones");
	int **B = create_two_dim_int(760, 60, "ones");
	int **C = create_two_dim_int(800, 460, "ones");

	for (int c = 5; c < 457; c++)
	  for (int b = 3; b < 340; b++)
	    for (int a = 3; a < 340; a++)
	    {
	      
	      C[a][b]=C[a][b-5]+E[a][b];
	      
	      D[a][b]=15;
	      D[a-3][b-2]=38;
	      
	      A[a]=B[a][b]-D[a][b]*C[a][b];
	      A[a]=19*D[a][b];
	      
	      A[a]=C[a][b]-38;
	      C[a][b]=C[a+2][b+1]*E[a][b];
	      
	      int var_a=C[a][b]*13;
	      int var_b=C[a+1][b+3]-46;
	    }

    return 0;
}