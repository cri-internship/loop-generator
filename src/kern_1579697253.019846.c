#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(70, 740, 250, "random");
	int *A = create_one_dim_int(960, "random");
	int ***C = create_three_dim_int(850, 50, 660, "random");

	for (int c = 3; c < 660; c++)
	  for (int b = 2; b < 50; b++)
	    for (int a = 3; a < 850; a++)
	    {
	      
	      C[a][b][c]=C[a][b-2][c-3]-32;
	      
	      C[a][b][c]=C[a-1][b][c-2]*29;
	      
	      A[a]=A[a-3]*40;
	    }

    return 0;
}