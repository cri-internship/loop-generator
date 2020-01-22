#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(10, 800, "zeros");
	int ***B = create_three_dim_int(920, 550, 990, "zeros");
	int ***C = create_three_dim_int(470, 470, 520, "zeros");

	for (int c = 3; c < 516; c++)
	  for (int b = 4; b < 467; b++)
	    for (int a = 3; a < 6; a++)
	    {
	      
	      C[a][b][c]=C[a][b-1][c-1]*15;
	      
	      B[a][b][c]=B[a-3][b-3][c-2]*8;
	      
	      B[a][b][c]=B[a+3][b][c+2]*A[a][b]+30;
	      
	      C[a][b][c]=C[a+3][b+3][c+4]/B[a][b][c]+26;
	      
	      int var_a=A[a][b]-22;
	      int var_b=A[a+4][b]+46;
	    }

    return 0;
}