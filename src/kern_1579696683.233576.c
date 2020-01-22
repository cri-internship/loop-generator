#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(120, 200, "ones");
	int **A = create_two_dim_int(370, 850, "ones");
	int ***B = create_three_dim_int(900, 570, 130, "ones");
	int **C = create_two_dim_int(190, 430, "ones");

	for (int c = 0; c < 849; c++)
	  for (int b = 0; b < 370; b++)
	    for (int a = 0; a < 370; a++)
	    {
	      
	      A[a][b]=15;
	      A[a][b+1]=21;
	    }

    return 0;
}