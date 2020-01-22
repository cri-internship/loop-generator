#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(530, 690, 730, "zeros");
	int **B = create_two_dim_int(120, 850, "zeros");

	for (int b = 2; b < 689; b++)
	  for (int a = 3; a < 115; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-2][a]+B[a][b];
	    
	     B[a][b]=B[a+5][b+1]+33;
	    
	     A[a][b][a]=B[a][b];
	    
	     int var_a=B[a][b]*24;
	     int var_b=B[a][b+5]*23;
	  }

    return 0;
}