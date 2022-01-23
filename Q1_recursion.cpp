#include <ctime>
#include <iostream>

using namespace std;

__int128 fib(__int128 x)
{
    if ((x == 1) || (x == 0))
    {
       
        return (x);
    }
    else
    {
        
        return (fib(x - 1) + fib(x - 2));
    }
}

int main()
{
    int x;
    cout << "Enter the number of terms of series : ";
    cin >> x;
    timespec start, end;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start);

    cout << "\nFibonnaci number is : " << fib(x) << endl;

    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);
    long seconds = end.tv_sec - start.tv_sec;
    long nanoseconds = end.tv_nsec - start.tv_nsec;
    double elapsed = seconds + nanoseconds * 1e-9;
    cout << "\nTime taken: " << elapsed << " seconds\n";
    return 0;
}

