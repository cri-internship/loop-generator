#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(910, 180, "zeros");
	int ***A = create_three_dim_int(30, 810, 830, "zeros");
	int **C = create_two_dim_int(420, 240, "zeros");

	for (int b = 1; b < 180; b++)
	  for (int a = 1; a < 26; a++)
	  {
	    
	     B[a][b]=B[a-1][b-1]-6;
	    
	     A[a][b][a]=A[a+3][b+2][a+4]+C[a][b];
	    
	     C[a][b]=C[a+2][b]-44;
	  }

    return 0;
}