#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(30, 770, 20, "random");
	int ***A = create_three_dim_int(470, 200, 990, "random");

	for (int c = 4; c < 20; c++)
	  for (int b = 5; b < 195; b++)
	    for (int a = 5; a < 30; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-5][c-3]/36;
	      
	      B[a][b][c]=B[a-5][b-5][c-4]/A[a][b][c];
	      
	      B[a][b][c]=B[a-3][b-3][c-3]/34;
	      
	      A[a][b][c]=6;
	      A[a][b+5][c+1]=27;
	      
	      int var_a=B[a][b][c]/19;
	      int var_b=B[a-5][b-4][c]-1;
	    }

    return 0;
}