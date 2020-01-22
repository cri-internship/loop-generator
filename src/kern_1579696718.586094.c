#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(850, 710, "zeros");
	int ***A = create_three_dim_int(660, 360, 740, "zeros");

	for (int b = 0; b < 355; b++)
	  for (int a = 0; a < 655; a++)
	  {
	    
	     B[a][b]=B[a+1][b+5]+A[a][b][a];
	    
	     A[a][b][a]=21;
	     A[a+5][b+5][a+2]=28;
	    
	     A[a][b][a]=B[a][b];
	    
	     A[a][b][a]=A[a][b][a]-B[a][b];
	     B[a][b]=A[a+5][b+3][a+5]-B[a][b];
	  }

    return 0;
}