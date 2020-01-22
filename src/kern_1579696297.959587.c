#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(850, 820, "zeros");
	int ***A = create_three_dim_int(750, 970, 670, "zeros");

	for (int b = 4; b < 818; b++)
	  for (int a = 5; a < 750; a++)
	  {
	    
	     B[a][b]=A[a][b][a];
	     A[a][b][a]=B[a][b]+A[a][b][a];
	    
	     B[a][b]=B[a-2][b]*33;
	    
	     A[a][b][a]=A[a-2][b-4][a-2]-7;
	    
	     B[a][b]=B[a-1][b-3]-10;
	    
	     int var_a=B[a][b]-40;
	     int var_b=B[a-5][b-4]*24;
	  }

    return 0;
}