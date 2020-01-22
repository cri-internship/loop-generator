#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(480, 610, 20, "random");
	int **C = create_two_dim_int(460, 270, "random");
	int **A = create_two_dim_int(850, 290, "random");
	int ***B = create_three_dim_int(940, 270, 660, "random");

	for (int c = 4; c < 16; c++)
	  for (int b = 0; b < 265; b++)
	    for (int a = 3; a < 479; a++)
	    {
	      
	      B[a][b][c]=B[a][b+1][c+5]*41;
	      
	      B[a][b][c]=43;
	      
	      D[a][b][c]=40;
	      D[a+1][b][c+4]=40;
	    }

    return 0;
}