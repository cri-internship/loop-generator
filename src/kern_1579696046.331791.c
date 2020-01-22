#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(470, 470, 800, "zeros");
	int **B = create_two_dim_int(240, 50, "zeros");

	for (int c = 2; c < 800; c++)
	  for (int b = 3; b < 50; b++)
	    for (int a = 5; a < 235; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-3][c]*46;
	      
	      B[a][b]=B[a-4][b]/A[a][b][c];
	      
	      B[a][b]=37;
	      
	      A[a][b][c]=B[a][b]*A[a][b][c];
	      B[a][b]=B[a+4][b]/A[a][b][c];
	      
	      int var_a=A[a][b][c]-20;
	      int var_b=A[a-5][b-1][c-2]*49;
	    }

    return 0;
}