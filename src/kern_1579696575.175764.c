#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(200, 170, "ones");
	int **C = create_two_dim_int(140, 490, "ones");
	int ***D = create_three_dim_int(470, 210, 460, "ones");
	int ***B = create_three_dim_int(690, 510, 440, "ones");
	int **E = create_two_dim_int(210, 720, "ones");

	for (int c = 0; c < 720; c++)
	  for (int b = 0; b < 207; b++)
	    for (int a = 0; a < 207; a++)
	    {
	      
	      C[a][b]=E[a][b]-B[a][b][c]*C[a][b]+D[a][b][c];
	      B[a][b][c]=E[a+3][b]+A[a][b]*C[a][b]-B[a][b][c]/D[a][b][c];
	    }

    return 0;
}