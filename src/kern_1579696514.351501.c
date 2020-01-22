#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(1000, 400, 650, "ones");
	int *E = create_one_dim_int(930, "ones");
	int ***D = create_three_dim_int(140, 450, 100, "ones");
	int ***A = create_three_dim_int(690, 110, 380, "ones");
	int **C = create_two_dim_int(670, 890, "ones");

	for (int c = 0; c < 376; c++)
	  for (int b = 0; b < 105; b++)
	    for (int a = 0; a < 688; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+5][c+4]/17;
	      
	      C[a][b]=E[a]/C[a][b];
	      A[a][b][c]=E[a+5]-B[a][b][c]*A[a][b][c]+D[a][b][c];
	    }

    return 0;
}