#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(720, "ones");
	int ***D = create_three_dim_int(660, 880, 70, "ones");
	int ***A = create_three_dim_int(1000, 890, 150, "ones");
	int **C = create_two_dim_int(420, 930, "ones");

	for (int c = 3; c < 925; c++)
	  for (int b = 5; b < 417; b++)
	    for (int a = 5; a < 417; a++)
	    {
	      
	      C[a][b]=C[a-5][b-3]/D[a][b][c];
	      
	      C[a][b]=C[a+3][b+5]/B[a]+A[a][b][c];
	      
	      B[a]=C[a][b]+A[a][b][c]/D[a][b][c];
	      B[a-5]=A[a][b][c];
	      
	      B[a]=42;
	    }

    return 0;
}