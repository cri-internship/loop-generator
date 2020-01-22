#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(880, 430, 670, "random");
	double ***B = create_three_dim_double(260, 830, 900, "random");

	for (int b = 5; b < 826; b++)
	  for (int a = 3; a < 256; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+4][a]-0.082;
	    
	     B[a][b][a]=0.378;
	  }

    return 0;
}