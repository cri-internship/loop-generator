#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(30, 630, "zeros");
	int **B = create_two_dim_int(320, 310, "zeros");
	int ***A = create_three_dim_int(640, 580, 390, "zeros");

	for (int c = 0; c < 390; c++)
	  for (int b = 3; b < 310; b++)
	    for (int a = 3; a < 26; a++)
	    {
	      
	      B[a][b]=B[a-2][b-3]/C[a][b]*A[a][b][c];
	      
	      C[a][b]=C[a+4][b+1]-B[a][b];
	      
	      C[a][b]=C[a+4][b+5]*B[a][b]+A[a][b][c];
	      
	      A[a][b][c]=C[a][b];
	      A[a-3][b][c]=B[a][b];
	      
	      B[a][b]=18;
	      
	      A[a][b][c]=B[a][b]/C[a][b];
	    }

    return 0;
}