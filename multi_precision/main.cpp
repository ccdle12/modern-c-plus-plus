#include <stdio.h>
#include <iostream>
#include <vector>

class BigInteger
{
    public:
        BigInteger()
            : digits(1, 0)
        {}

        BigInteger& operator++() {
            return *this;
        }
    private:
        // TODO: It is storing in base 10 for now.
        // Little Endian.
        std::vector<int> digits;
}
int main() 
{

    BigInteger x;
    BigInteger y;

    ++x;

    return 0;
}
