#include <ctime>
#include <iostream>
#define N 101
using namespace std;

const __int128 NIL = -1;
__int128 lookup_table[N];

void init()
{
    for(__int128 i=0; i<N; i++)
        lookup_table[i] = NIL;
}

std::ostream&
operator<<( std::ostream& dest, __int128_t value )
{
    std::ostream::sentry s( dest );
    if ( s ) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[ 256 ];
        char* d = std::end( buffer );
        do
        {
            -- d;
            *d = "0123456789"[ tmp % 10 ];
            tmp /= 10;
        } while ( tmp != 0 );
        if ( value < 0 ) {
            -- d;
            *d = '-';
        }
        int len = std::end( buffer ) - d;
        if ( dest.rdbuf()->sputn( d, len ) != len ) {
            dest.setstate( std::ios_base::badbit );
        }
    }
    return dest;
}

int main()
{
    init();
    lookup_table[0] = 0;
    lookup_table[1] = 1;
    lookup_table[2] = 1;
    int i, number;
    cout << "Enter number of terms: ";
    cin >> number;
    timespec start, end;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start);

    for (i = 2; i < number+1; ++i)
    {
        lookup_table[i] = lookup_table[i-1] + lookup_table[i-2];
        cout << " " << lookup_table[i] << endl;
    }
    cout<< lookup_table[number] << endl;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);
    long long nanoseconds = end.tv_nsec - start.tv_nsec;
    cout << "\nTime taken: " << nanoseconds << " nanoseconds\n";
    return 0;
}
