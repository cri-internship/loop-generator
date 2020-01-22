#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(120, 620, 660, "zeros");
	double ***A = create_three_dim_double(510, 560, 560, "zeros");

	for (int b = 0; b < 615; b++)
	  for (int a = 0; a < 116; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+5][a+2]*A[a][b][a];
	  }

    return 0;
}