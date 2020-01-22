#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(860, "zeros");
	int ***B = create_three_dim_int(560, 240, 40, "zeros");
	int **C = create_two_dim_int(330, 980, "zeros");
	int *A = create_one_dim_int(980, "zeros");
	int **D = create_two_dim_int(80, 690, "zeros");

	for (int c = 0; c < 855; c++)
	  for (int b = 0; b < 855; b++)
	    for (int a = 0; a < 855; a++)
	    {
	      
	      E[a]=E[a+5]*40;
	    }

    return 0;
}