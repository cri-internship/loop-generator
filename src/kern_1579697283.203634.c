#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(440, 670, "random");
	int ***A = create_three_dim_int(620, 540, 620, "random");
	int ***B = create_three_dim_int(520, 110, 390, "random");

	for (int c = 0; c < 390; c++)
	  for (int b = 2; b < 110; b++)
	    for (int a = 2; a < 440; a++)
	    {
	      
	      B[a][b][c]=A[a][b][c];
	      B[a-2][b-1][c]=C[a][b];
	      
	      A[a][b][c]=1;
	      A[a+2][b+4][c+2]=8;
	      
	      C[a][b]=20;
	      C[a][b-2]=26;
	    }

    return 0;
}