#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(650, 640, "zeros");
	double **C = create_two_dim_double(120, 430, "zeros");
	double **A = create_two_dim_double(970, 530, "zeros");

	for (int c = 0; c < 635; c++)
	  for (int b = 0; b < 649; b++)
	    for (int a = 0; a < 649; a++)
	    {
	      
	      B[a][b]=B[a+1][b+5]-0.295;
	    }

    return 0;
}