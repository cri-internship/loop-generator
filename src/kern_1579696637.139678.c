#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(270, 100, "ones");
	int **B = create_two_dim_int(1000, 280, "ones");
	int **D = create_two_dim_int(150, 970, "ones");
	int ***C = create_three_dim_int(350, 600, 580, "ones");

	for (int c = 2; c < 280; c++)
	  for (int b = 5; b < 1000; b++)
	    for (int a = 5; a < 1000; a++)
	    {
	      
	      B[a][b]=B[a-5][b-2]/1;
	    }

    return 0;
}