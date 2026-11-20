
#include<stdio.h>

int main()
{
    int n, original, count=0, size;
    int temp, temp1, i=0, j, result=0;

    printf("Enter a value of n: ");
    scanf("%d",&n);

    original = n;

    while(n > 0)
    {
        n = n / 10;
        count++;
    }

    size = count;

    int arr[size];

    while(count != 0)
    {
        arr[i] = original % 10;
        original = original / 10;
        i++;
        count--;
    }

    // Bubble Sort
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Find first non-zero digit
    for(i=1; i<size; i++)
    {
        if(arr[i] != 0)
        {
            temp1 = arr[0];
            arr[0] = arr[i];
            arr[i] = temp1;
            break;
        }
    }

    // Create minimum number
    for(i=0; i<size; i++)
    {
        result = result * 10 + arr[i];
    }

    printf("Output: %d",result);

    return 0;
}
