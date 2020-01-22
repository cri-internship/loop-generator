#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(840, "random");
	int ***A = create_three_dim_int(250, 290, 270, "random");
	int ***B = create_three_dim_int(600, 730, 620, "random");
	int **D = create_two_dim_int(750, 980, "random");
	int **C = create_two_dim_int(750, 400, "random");

	for (int c = 1; c < 270; c++)
	  for (int b = 2; b < 290; b++)
	    for (int a = 0; a < 250; a++)
	    {
	      
	      A[a][b][c]=10;
	      A[a][b-2][c-1]=1;
	    }

    return 0;
}