#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(520, 680, 380, "ones");
	int **A = create_two_dim_int(710, 960, "ones");
	int *D = create_one_dim_int(930, "ones");
	int **B = create_two_dim_int(110, 820, "ones");
	int **E = create_two_dim_int(850, 30, "ones");

	for (int c = 0; c < 378; c++)
	  for (int b = 0; b < 676; b++)
	    for (int a = 0; a < 519; a++)
	    {
	      
	      C[a][b][c]=C[a+1][b+4][c+2]-4;
	      
	      A[a][b]=E[a][b]/D[a];
	      A[a+1][b+3]=C[a][b][c];
	      
	      int var_a=A[a][b]-16;
	      int var_b=A[a+1][b+4]-39;
	    }

    return 0;
}