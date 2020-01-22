#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(750, 630, "ones");
	int ***B = create_three_dim_int(470, 620, 960, "ones");

	for (int b = 0; b < 615; b++)
	  for (int a = 0; a < 465; a++)
	  {
	    
	     B[a][b][a]=B[a][b+5][a+5]-8;
	    
	     B[a][b][a]=B[a+2][b+1][a+4]*49;
	    
	     A[a][b]=B[a][b][a];
	     A[a+4][b+4]=37;
	  }

    return 0;
}