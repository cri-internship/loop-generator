#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(290, 530, 870, "zeros");
	int **B = create_two_dim_int(860, 280, "zeros");
	int **C = create_two_dim_int(340, 660, "zeros");
	int **D = create_two_dim_int(910, 490, "zeros");
	int ***A = create_three_dim_int(460, 170, 280, "zeros");

	for (int b = 2; b < 170; b++)
	  for (int a = 5; a < 460; a++)
	  {
	    
	     B[a][b]=B[a-5][b-2]*16;
	    
	     A[a][b][a]=A[a-1][b-2][a-2]+E[a][b][a]*C[a][b];
	    
	     B[a][b]=B[a+4][b+4]-47;
	    
	     B[a][b]=B[a+3][b+1]+30;
	    
	     D[a][b]=37;
	     D[a][b+5]=7;
	  }

    return 0;
}