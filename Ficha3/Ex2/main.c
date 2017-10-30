#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
        int x = 1;

        while(x <= 300)
        {
            if (x%2 == 0)
                printf("%d ",x);

            x++;
        }
        
        return (0);
}
