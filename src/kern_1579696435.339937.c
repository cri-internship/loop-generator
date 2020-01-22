#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(280, 720, 220, "ones");
	int *A = create_one_dim_int(650, "ones");
	int ***C = create_three_dim_int(790, 680, 970, "ones");

	for (int c = 4; c < 220; c++)
	  for (int b = 5; b < 676; b++)
	    for (int a = 5; a < 280; a++)
	    {
	      
	      A[a]=16;
	      float  var_a=A[a]/38;
	      
	      C[a][b][c]=C[a+3][b+1][c]/6;
	      
	      A[a]=B[a][b][c];
	      
	      B[a][b][c]=C[a][b][c];
	      B[a-5][b-5][c-4]=A[a];
	      
	      B[a][b][c]=C[a][b][c]/A[a]+B[a][b][c];
	      A[a]=C[a+3][b+4][c+3]-B[a][b][c];
	    }

    return 0;
}