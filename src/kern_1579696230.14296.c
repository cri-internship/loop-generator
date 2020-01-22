#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(920, 870, 160, "zeros");
	int **C = create_two_dim_int(450, 960, "zeros");
	int **A = create_two_dim_int(460, 830, "zeros");

	for (int b = 0; b < 868; b++)
	  for (int a = 0; a < 449; a++)
	  {
	    
	     C[a][b]=C[a+1][b+3]-17;
	    
	     B[a][b][a]=48;
	     B[a+3][b+2][a+5]=C[a][b]*A[a][b];
	  }

    return 0;
}