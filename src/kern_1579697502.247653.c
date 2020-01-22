#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(290, 100, 550, "zeros");
	double **C = create_two_dim_double(80, 560, "zeros");
	double ***D = create_three_dim_double(800, 390, 890, "zeros");
	double ***B = create_three_dim_double(980, 760, 60, "zeros");

	for (int b = 0; b < 758; b++)
	  for (int a = 0; a < 975; a++)
	  {
	    
	     B[a][b][a]=B[a+1][b+2][a+5]+C[a][b];
	  }

    return 0;
}