#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(90, 930, 870, "ones");
	int ***B = create_three_dim_int(400, 860, 490, "ones");
	int ***C = create_three_dim_int(650, 340, 1000, "ones");
	int ***A = create_three_dim_int(280, 60, 210, "ones");
	int **E = create_two_dim_int(990, 170, "ones");

	for (int c = 4; c < 206; c++)
	  for (int b = 3; b < 58; b++)
	    for (int a = 4; a < 90; a++)
	    {
	      
	      D[a][b][c]=D[a-3][b-2][c-4]+46;
	      
	      C[a][b][c]=C[a-1][b][c]-D[a][b][c]/B[a][b][c];
	      
	      B[a][b][c]=B[a-4][b-3][c-2]+13;
	      
	      A[a][b][c]=12;
	      A[a+3][b+2][c+4]=35;
	      
	      C[a][b][c]=36;
	      
	      D[a][b][c]=B[a][b][c]*C[a][b][c]-33;
	      E[a][b]=B[a+2][b+3][c]*A[a][b][c]-E[a][b]+C[a][b][c]/D[a][b][c];
	    }

    return 0;
}