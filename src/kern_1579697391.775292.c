#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(390, "random");
	int *D = create_one_dim_int(910, "random");
	int **C = create_two_dim_int(130, 130, "random");
	int **B = create_two_dim_int(910, 680, "random");

	for (int d = 0; d < 125; d++)
	  for (int c = 0; c < 125; c++)
	    for (int b = 0; b < 125; b++)
	      for (int a = 0; a < 125; a++)
	      {
	        
	       A[a]=A[a+4]+D[a]*B[a][b];
	        
	       D[a]=D[a+5]*A[a]-13;
	        
	       A[a]=30;
	        
	       C[a][b]=28;
	       C[a+5][b+5]=18;
	      }

    return 0;
}