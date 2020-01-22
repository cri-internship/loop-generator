#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(930, 160, 760, "zeros");
	int **A = create_two_dim_int(780, 800, "zeros");
	int **C = create_two_dim_int(210, 150, "zeros");

	for (int b = 5; b < 147; b++)
	  for (int a = 5; a < 207; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-5][a]+A[a][b]*C[a][b];
	    
	     B[a][b][a]=B[a+5][b+5][a+3]*19;
	    
	     A[a][b]=A[a][b+2]-B[a][b][a]*B[a][b][a];
	    
	     C[a][b]=C[a][b]*A[a][b];
	     B[a][b][a]=C[a+3][b+3]+B[a][b][a];
	  }

    return 0;
}