#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(820, 930, 790, "zeros");
	int *D = create_one_dim_int(680, "zeros");
	int *B = create_one_dim_int(900, "zeros");
	int ***A = create_three_dim_int(10, 340, 570, "zeros");

	for (int c = 4; c < 568; c++)
	  for (int b = 5; b < 337; b++)
	    for (int a = 4; a < 7; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-3][c-4]/B[a]+33;
	      
	      D[a]=6;
	      D[a]=18;
	      
	      A[a][b][c]=C[a][b][c]/31;
	      
	      C[a][b][c]=A[a][b][c]/C[a][b][c];
	      B[a]=A[a+3][b+3][c+2]/B[a]-42;
	    }

    return 0;
}