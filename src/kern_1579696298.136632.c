#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(150, 900, "random");
	int **C = create_two_dim_int(800, 820, "random");
	int ***B = create_three_dim_int(620, 80, 940, "random");

	for (int c = 2; c < 820; c++)
	  for (int b = 4; b < 147; b++)
	    for (int a = 4; a < 147; a++)
	    {
	      
	      A[a][b]=A[a+3][b+2]+27;
	      
	      C[a][b]=C[a][b]-A[a][b]+B[a][b][c];
	      A[a][b]=C[a-4][b-2]/B[a][b][c];
	    }

    return 0;
}