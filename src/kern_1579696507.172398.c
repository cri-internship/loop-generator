#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(440, "random");
	int **A = create_two_dim_int(230, 150, "random");
	int ***E = create_three_dim_int(90, 920, 430, "random");
	int *D = create_one_dim_int(880, "random");
	int ***B = create_three_dim_int(390, 270, 680, "random");

	for (int c = 1; c < 430; c++)
	  for (int b = 0; b < 920; b++)
	    for (int a = 5; a < 90; a++)
	    {
	      
	      E[a][b][c]=13;
	      E[a-5][b][c-1]=45;
	      
	      D[a]=14;
	      D[a-5]=18;
	      
	      C[a]=7;
	      C[a-1]=27;
	    }

    return 0;
}