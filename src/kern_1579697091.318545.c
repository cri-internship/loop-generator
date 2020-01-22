#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(600, 500, "ones");
	int *E = create_one_dim_int(130, "ones");
	int ***B = create_three_dim_int(600, 530, 470, "ones");
	int ***D = create_three_dim_int(960, 700, 860, "ones");
	int ***C = create_three_dim_int(560, 380, 30, "ones");

	for (int d = 2; d < 30; d++)
	  for (int c = 0; c < 380; c++)
	    for (int b = 5; b < 560; b++)
	      for (int a = 5; a < 560; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b][c-2]*4;
	        
	       B[a][b][c]=B[a+3][b+3][c+1]/27;
	        
	       D[a][b][c]=21/A[a][b];
	       D[a+4][b+4][c]=10;
	      }

    return 0;
}