#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(20, 100, 800, "zeros");
	int **C = create_two_dim_int(280, 80, "zeros");
	int ***B = create_three_dim_int(10, 190, 800, "zeros");

	for (int b = 0; b < 80; b++)
	  for (int a = 0; a < 275; a++)
	  {
	    
	     B[a][b][a]=C[a][b]*A[a][b][a];
	     C[a][b]=C[a+5][b]-B[a][b][a];
	  }

    return 0;
}