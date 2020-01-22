#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(570, 410, "zeros");
	double ***B = create_three_dim_double(740, 90, 470, "zeros");
	double **D = create_two_dim_double(370, 100, "zeros");
	double **A = create_two_dim_double(190, 580, "zeros");
	double ***C = create_three_dim_double(320, 120, 280, "zeros");

	for (int b = 0; b < 116; b++)
	  for (int a = 0; a < 316; a++)
	  {
	    
	     C[a][b][a]=C[a+3][b+4][a+4]+0.031;
	  }

    return 0;
}