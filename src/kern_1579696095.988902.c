#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(700, 470, "random");
	int **E = create_two_dim_int(800, 90, "random");
	int **C = create_two_dim_int(720, 480, "random");
	int ***A = create_three_dim_int(260, 880, 520, "random");
	int *B = create_one_dim_int(40, "random");

	for (int c = 3; c < 470; c++)
	  for (int b = 3; b < 700; b++)
	    for (int a = 3; a < 700; a++)
	    {
	      
	      D[a][b]=D[a-3][b-3]*21;
	    }

    return 0;
}