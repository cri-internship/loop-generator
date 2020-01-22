#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(720, 400, "zeros");
	int ***B = create_three_dim_int(870, 10, 970, "zeros");

	for (int c = 2; c < 968; c++)
	  for (int b = 5; b < 10; b++)
	    for (int a = 4; a < 715; a++)
	    {
	      
	      A[a][b]=A[a-3][b-5]+16;
	      
	      A[a][b]=A[a+5][b+4]+23;
	      
	      B[a][b][c]=31;
	      B[a+1][b][c+2]=21;
	      
	      B[a][b][c]=A[a][b];
	    }

    return 0;
}