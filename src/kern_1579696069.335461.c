#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(830, 320, 920, "zeros");
	int ***A = create_three_dim_int(350, 710, 420, "zeros");

	for (int b = 5; b < 317; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     A[a][b][a]=B[a][b][a];
	     A[a][b][a]=6;
	    
	     B[a][b][a]=0;
	     B[a+4][b+3][a+4]=15;
	    
	     A[a][b][a]=A[a][b][a]+42;
	     B[a][b][a]=A[a-5][b-5][a]-13;
	    
	     int var_a=B[a][b][a]+21;
	     int var_b=B[a+1][b+1][a+3]*28;
	  }

    return 0;
}