#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(240, 620, 820, "zeros");
	int ***A = create_three_dim_int(580, 960, 960, "zeros");

	for (int b = 3; b < 618; b++)
	  for (int a = 5; a < 237; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-3][a-5]+13;
	    
	     B[a][b][a]=A[a][b][a];
	     B[a+3][b+2][a+3]=47;
	    
	     int var_a=A[a][b][a]+9;
	     int var_b=A[a+5][b+3][a+5]+22;
	    
	     B[a][b][a]=A[a][b][a]*0;
	     A[a][b][a]=A[a+1][b+1][a+2]-B[a][b][a];
	  }

    return 0;
}