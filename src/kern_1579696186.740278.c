#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(920, 350, 10, "random");
	int *A = create_one_dim_int(890, "random");
	int **E = create_two_dim_int(790, 60, "random");
	int ***B = create_three_dim_int(400, 530, 540, "random");
	int *C = create_one_dim_int(490, "random");

	for (int c = 4; c < 10; c++)
	  for (int b = 4; b < 350; b++)
	    for (int a = 4; a < 400; a++)
	    {
	      
	      C[a]=C[a-3]/A[a]*B[a][b][c];
	      
	      D[a][b][c]=D[a-4][b-4][c-4]-E[a][b];
	      
	      C[a]=C[a-4]-38;
	      
	      A[a]=44;
	      A[a+2]=15;
	      
	      B[a][b][c]=D[a][b][c]*C[a]+C[a]-E[a][b];
	      B[a][b+1][c+2]=46*E[a][b]/C[a]+A[a];
	    }

    return 0;
}