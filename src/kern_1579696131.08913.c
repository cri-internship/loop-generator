#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(640, 80, "ones");
	int ***C = create_three_dim_int(240, 680, 460, "ones");
	int **B = create_two_dim_int(930, 150, "ones");

	for (int b = 3; b < 80; b++)
	  for (int a = 5; a < 237; a++)
	  {
	    
	     C[a][b][a]=C[a+3][b+5][a]/A[a][b];
	    
	     A[a][b]=A[a+5][b]*C[a][b][a]/B[a][b];
	    
	     C[a][b][a]=C[a][b][a]-B[a][b];
	     A[a][b]=C[a][b][a+1]-25+B[a][b];
	    
	     B[a][b]=C[a][b][a]+38;
	     A[a][b]=C[a][b-3][a-5]+40;
	  }

    return 0;
}