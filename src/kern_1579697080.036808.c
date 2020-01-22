#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(80, 580, "ones");
	double ***A = create_three_dim_double(550, 720, 590, "ones");
	double ***C = create_three_dim_double(30, 460, 670, "ones");
	double ***B = create_three_dim_double(440, 330, 20, "ones");

	for (int b = 0; b < 717; b++)
	  for (int a = 0; a < 546; a++)
	  {
	    
	     A[a][b][a]=A[a][b+3][a+4]*D[a][b]+B[a][b][a];
	    
	     A[a][b][a]=A[a][b+1][a+4]*0.924;
	  }

    return 0;
}