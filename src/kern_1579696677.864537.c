#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(700, 740, 70, "zeros");
	int *C = create_one_dim_int(650, "zeros");
	int **D = create_two_dim_int(10, 840, "zeros");
	int ***B = create_three_dim_int(990, 980, 420, "zeros");
	int ***A = create_three_dim_int(240, 810, 340, "zeros");

	for (int c = 2; c < 420; c++)
	  for (int b = 4; b < 840; b++)
	    for (int a = 1; a < 10; a++)
	    {
	      
	      B[a][b][c]=B[a][b-2][c-2]*48;
	      
	      D[a][b]=22;
	      D[a-1][b-4]=0;
	    }

    return 0;
}