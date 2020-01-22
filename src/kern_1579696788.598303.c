#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(80, "random");
	int ***A = create_three_dim_int(960, 850, 420, "random");

	for (int b = 2; b < 847; b++)
	  for (int a = 4; a < 80; a++)
	  {
	    
	     int var_a=B[a]/12;
	     B[a]=0;
	    
	     A[a][b][a]=A[a+5][b+3][a+5]-47;
	    
	     A[a][b][a]=B[a];
	  }

    return 0;
}