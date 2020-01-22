#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(800, 30, 260, "zeros");
	int ***A = create_three_dim_int(300, 900, 640, "zeros");

	for (int c = 2; c < 255; c++)
	  for (int b = 0; b < 28; b++)
	    for (int a = 4; a < 300; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b][c-2]+2;
	      
	      B[a][b][c]=1;
	      B[a][b+2][c+5]=A[a][b][c];
	      
	      B[a][b][c]=5;
	    }

    return 0;
}