#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(980, 580, 550, "zeros");
	int ***B = create_three_dim_int(390, 770, 90, "zeros");

	for (int b = 4; b < 577; b++)
	  for (int a = 4; a < 386; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b][a]+26;
	    
	     B[a][b][a]=B[a+2][b+5][a+1]-43;
	    
	     A[a][b][a]=A[a+5][b+3][a+3]-36;
	    
	     A[a][b][a]=22;
	    
	     A[a][b][a]=A[a][b][a]-B[a][b][a];
	     B[a][b][a]=A[a-3][b][a-4]+B[a][b][a];
	  }

    return 0;
}