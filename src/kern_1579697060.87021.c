#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(290, 150, "zeros");
	int ***D = create_three_dim_int(480, 770, 630, "zeros");
	int **C = create_two_dim_int(180, 890, "zeros");
	int ***B = create_three_dim_int(10, 870, 550, "zeros");
	int **E = create_two_dim_int(310, 340, "zeros");

	for (int c = 4; c < 147; c++)
	  for (int b = 5; b < 177; b++)
	    for (int a = 5; a < 177; a++)
	    {
	      
	      E[a][b]=E[a-5][b-2]*9;
	      
	      A[a][b]=A[a+5][b+3]-B[a][b][c]+D[a][b][c]*C[a][b];
	      
	      C[a][b]=A[a][b]/39*D[a][b][c]-B[a][b][c];
	      C[a-1][b-4]=B[a][b][c]-E[a][b]*D[a][b][c];
	      
	      E[a][b]=B[a][b][c];
	      
	      int var_a=C[a][b]+45;
	      int var_b=C[a+3][b+3]*16;
	    }

    return 0;
}