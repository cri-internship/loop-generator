#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(560, 150, 180, "zeros");
	int **B = create_two_dim_int(120, 500, "zeros");

	for (int c = 0; c < 495; c++)
	  for (int b = 0; b < 115; b++)
	    for (int a = 0; a < 115; a++)
	    {
	      
	      B[a][b]=B[a+5][b+1]+A[a][b][c];
	      
	      B[a][b]=B[a][b]-20;
	      A[a][b][c]=B[a+3][b+5]*A[a][b][c];
	    }

    return 0;
}