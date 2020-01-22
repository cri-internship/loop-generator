#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(120, 960, "random");
	int *A = create_one_dim_int(570, "random");
	int ***C = create_three_dim_int(260, 400, 480, "random");
	int **B = create_two_dim_int(80, 320, "random");

	for (int c = 4; c < 476; c++)
	  for (int b = 1; b < 317; b++)
	    for (int a = 4; a < 76; a++)
	    {
	      
	      C[a][b][c]=C[a][b-1][c-2]/B[a][b]-32;
	      
	      C[a][b][c]=C[a+4][b+4][c+4]+19;
	      
	      C[a][b][c]=A[a]*C[a][b][c]-D[a][b];
	      A[a]=11*D[a][b]/C[a][b][c];
	      
	      B[a][b]=1;
	      B[a+4][b+3]=46;
	      
	      A[a]=35;
	      
	      int var_a=C[a][b][c]-48;
	      int var_b=C[a-1][b][c-4]/7;
	    }

    return 0;
}