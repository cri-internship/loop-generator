#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(610, 220, "zeros");
	int ***B = create_three_dim_int(720, 430, 480, "zeros");

	for (int b = 5; b < 425; b++)
	  for (int a = 3; a < 715; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-5][a-2]*17;
	    
	     B[a][b][a]=B[a-3][b][a-2]*A[a][b];
	    
	     B[a][b][a]=B[a+5][b][a+5]-A[a][b];
	    
	     A[a][b]=B[a][b][a]/A[a][b];
	     B[a][b][a]=B[a+1][b+5][a+3]*A[a][b];
	    
	     B[a][b][a]=B[a][b][a]-A[a][b];
	     A[a][b]=B[a+1][b+2][a+2]*A[a][b];
	  }

    return 0;
}