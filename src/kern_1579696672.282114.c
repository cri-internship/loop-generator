#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(730, 320, 740, "random");
	int *B = create_one_dim_int(490, "random");
	int **A = create_two_dim_int(310, 660, "random");

	for (int c = 5; c < 738; c++)
	  for (int b = 1; b < 315; b++)
	    for (int a = 3; a < 310; a++)
	    {
	      
	      C[a][b][c]=C[a+1][b+5][c+2]-20;
	      
	      B[a]=B[a+5]-10;
	      
	      A[a][b]=27+C[a][b][c];
	      A[a-3][b]=C[a][b][c];
	      
	      C[a][b][c]=39;
	      
	      B[a]=30;
	      
	      int var_a=B[a]+38;
	    }

    return 0;
}