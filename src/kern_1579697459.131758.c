#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(570, "random");
	int ***C = create_three_dim_int(100, 490, 570, "random");
	int **A = create_two_dim_int(810, 80, "random");
	int **B = create_two_dim_int(810, 650, "random");
	int ***E = create_three_dim_int(960, 840, 790, "random");

	for (int c = 1; c < 80; c++)
	  for (int b = 5; b < 570; b++)
	    for (int a = 5; a < 570; a++)
	    {
	      
	      B[a][b]=B[a-5][b-1]-47;
	      
	      D[a]=34;
	      D[a-2]=23;
	      
	      int var_a=A[a][b]-40;
	      int var_b=A[a-1][b-1]*49;
	    }

    return 0;
}