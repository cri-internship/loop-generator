#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(360, 290, 960, "random");
	int ***B = create_three_dim_int(80, 410, 840, "random");

	for (int c = 4; c < 840; c++)
	  for (int b = 2; b < 288; b++)
	    for (int a = 3; a < 80; a++)
	    {
	      
	      B[a][b][c]=B[a][b][c-4]*25;
	      
	      A[a][b][c]=A[a-3][b-2][c-1]+B[a][b][c];
	      
	      A[a][b][c]=B[a][b][c];
	    }

    return 0;
}