#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(790, 840, "ones");
	int **C = create_two_dim_int(710, 440, "ones");
	int ***A = create_three_dim_int(230, 620, 510, "ones");
	int **B = create_two_dim_int(890, 500, "ones");
	int **D = create_two_dim_int(800, 440, "ones");

	for (int c = 5; c < 509; c++)
	  for (int b = 5; b < 436; b++)
	    for (int a = 3; a < 230; a++)
	    {
	      
	      C[a][b]=C[a-2][b-1]*35;
	      
	      B[a][b]=B[a-2][b-3]-C[a][b]/D[a][b]+A[a][b][c]*E[a][b];
	      
	      A[a][b][c]=A[a][b+1][c+1]-B[a][b];
	      
	      E[a][b]=E[a+4][b+3]-10;
	      
	      D[a][b]=D[a+5][b+4]/31;
	      
	      E[a][b]=E[a][b+4]+6*D[a][b];
	      
	      int var_a=A[a][b][c]-39;
	      int var_b=A[a-3][b-5][c-5]-6;
	    }

    return 0;
}