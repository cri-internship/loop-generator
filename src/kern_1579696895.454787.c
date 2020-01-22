#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(920, 470, 160, "random");
	int **D = create_two_dim_int(840, 180, "random");
	int ***A = create_three_dim_int(720, 650, 640, "random");
	int **B = create_two_dim_int(880, 500, "random");

	for (int c = 3; c < 160; c++)
	  for (int b = 4; b < 177; b++)
	    for (int a = 3; a < 836; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-2][c-3]+B[a][b]/7*A[a][b][c];
	      
	      D[a][b]=D[a-3][b-4]+C[a][b][c];
	      
	      D[a][b]=D[a+4][b+3]/C[a][b][c]+30;
	    }

    return 0;
}