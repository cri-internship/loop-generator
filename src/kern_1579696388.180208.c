#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(30, 550, 610, "random");
	int ***A = create_three_dim_int(330, 600, 160, "random");
	int **B = create_two_dim_int(650, 260, "random");
	int **E = create_two_dim_int(600, 470, "random");
	int *D = create_one_dim_int(800, "random");

	for (int b = 0; b < 256; b++)
	  for (int a = 0; a < 25; a++)
	  {
	    
	     A[a][b][a]=A[a+4][b+4][a+5]/50;
	    
	     C[a][b][a]=C[a][b+3][a+5]+4;
	    
	     C[a][b][a]=C[a+5][b+5][a+5]/9;
	    
	     B[a][b]=B[a+1][b+4]+9;
	    
	     A[a][b][a]=A[a][b+2][a+3]*B[a][b];
	  }

    return 0;
}