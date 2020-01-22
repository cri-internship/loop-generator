#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(940, "zeros");
	int *B = create_one_dim_int(810, "zeros");
	int **C = create_two_dim_int(340, 960, "zeros");

	for (int c = 0; c < 960; c++)
	  for (int b = 2; b < 338; b++)
	    for (int a = 2; a < 338; a++)
	    {
	      
	      C[a][b]=C[a+2][b]/18;
	      
	      B[a]=37;
	      B[a-2]=46;
	    }

    return 0;
}