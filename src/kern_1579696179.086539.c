#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(330, "random");
	int *E = create_one_dim_int(20, "random");
	int **B = create_two_dim_int(580, 320, "random");
	int ***A = create_three_dim_int(780, 690, 330, "random");
	int ***D = create_three_dim_int(930, 610, 810, "random");

	for (int b = 0; b < 318; b++)
	  for (int a = 0; a < 328; a++)
	  {
	    
	     C[a]=20;
	     C[a+2]=4;
	    
	     B[a][b]=37;
	     B[a+5][b+2]=28;
	  }

    return 0;
}