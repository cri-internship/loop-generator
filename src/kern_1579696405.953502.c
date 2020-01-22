#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(100, 230, 70, "random");
	int *D = create_one_dim_int(970, "random");
	int **A = create_two_dim_int(200, 260, "random");
	int ***E = create_three_dim_int(260, 560, 970, "random");
	int ***B = create_three_dim_int(900, 460, 460, "random");

	for (int c = 3; c < 70; c++)
	  for (int b = 4; b < 230; b++)
	    for (int a = 5; a < 100; a++)
	    {
	      
	      D[a]=D[a-3]*B[a][b][c]/A[a][b];
	      
	      C[a][b][c]=C[a-5][b-1][c-3]/D[a]+E[a][b][c];
	      
	      E[a][b][c]=25;
	      E[a+2][b+3][c+4]=23;
	      
	      C[a][b][c]=E[a][b][c];
	      
	      D[a]=A[a][b]+C[a][b][c]-C[a][b][c];
	      E[a][b][c]=A[a+5][b+5]*C[a][b][c];
	      
	      C[a][b][c]=C[a][b][c]*23+E[a][b][c];
	      A[a][b]=C[a-2][b-2][c-3]/48-B[a][b][c];
	    }

    return 0;
}