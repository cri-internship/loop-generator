#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(370, 540, "random");
	int ***A = create_three_dim_int(880, 500, 30, "random");
	int *B = create_one_dim_int(200, "random");

	for (int c = 0; c < 26; c++)
	  for (int b = 0; b < 499; b++)
	    for (int a = 0; a < 368; a++)
	    {
	      
	      C[a][b]=C[a+2][b+2]-27;
	      
	      C[a][b]=A[a][b][c]-B[a];
	      A[a][b][c]=A[a][b+1][c+4]-C[a][b]*B[a];
	    }

    return 0;
}