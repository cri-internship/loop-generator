#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(520, "ones");
	int *D = create_one_dim_int(600, "ones");
	int *C = create_one_dim_int(990, "ones");
	int **A = create_two_dim_int(660, 120, "ones");
	int **B = create_two_dim_int(630, 530, "ones");

	for (int c = 5; c < 520; c++)
	  for (int b = 5; b < 520; b++)
	    for (int a = 5; a < 520; a++)
	    {
	      
	      C[a]=C[a-2]+30;
	      
	      E[a]=19;
	      E[a-5]=30;
	    }

    return 0;
}