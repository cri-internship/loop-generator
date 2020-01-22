#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(420, 570, 710, "zeros");
	int ***B = create_three_dim_int(360, 1000, 570, "zeros");
	int **C = create_two_dim_int(140, 340, "zeros");
	int ***D = create_three_dim_int(170, 50, 70, "zeros");

	for (int c = 4; c < 65; c++)
	  for (int b = 3; b < 45; b++)
	    for (int a = 5; a < 140; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-3][c-4]+20;
	      
	      C[a][b]=C[a-3][b]+39;
	      
	      D[a][b][c]=2;
	      D[a][b+5][c+5]=50;
	    }

    return 0;
}