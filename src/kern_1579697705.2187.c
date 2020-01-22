#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(570, "ones");
	int *B = create_one_dim_int(200, "ones");
	int ***D = create_three_dim_int(790, 390, 390, "ones");
	int ***A = create_three_dim_int(580, 300, 730, "ones");

	for (int c = 5; c < 388; c++)
	  for (int b = 1; b < 300; b++)
	    for (int a = 2; a < 195; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-1][c-5]/13;
	      
	      D[a][b][c]=D[a+1][b][c+1]*C[a]+B[a]-A[a][b][c];
	      
	      A[a][b][c]=C[a]*D[a][b][c];
	      C[a]=A[a][b][c]*B[a];
	      
	      D[a][b][c]=D[a+3][b+3][c+2]-25;
	      
	      B[a]=11;
	      B[a+5]=46;
	      
	      int var_a=C[a]*13;
	      int var_b=C[a+3]/4;
	    }

    return 0;
}