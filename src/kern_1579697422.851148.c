#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(280, "zeros");
	int ***B = create_three_dim_int(170, 570, 80, "zeros");
	int **E = create_two_dim_int(460, 430, "zeros");
	int ***C = create_three_dim_int(480, 500, 880, "zeros");
	int **A = create_two_dim_int(200, 120, "zeros");

	for (int c = 3; c < 120; c++)
	  for (int b = 0; b < 200; b++)
	    for (int a = 0; a < 200; a++)
	    {
	      
	      A[a][b]=A[a][b-3]*17;
	    }

    return 0;
}