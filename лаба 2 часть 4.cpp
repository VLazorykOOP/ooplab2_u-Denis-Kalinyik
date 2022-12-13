#include <iostream>
#include <bitset>

using namespace std;

const unsigned int BYTE = 10; 
const unsigned int STEP = 2; 

int main(){
    bitset<BYTE> bit(106), part1, part2, result;

    cout << "bit\t" << bit << endl;

    
    part1 = bit >> STEP; 
    cout << "part1\t" << part1 << endl;

    part2 = bit << BYTE - STEP; 
    cout << "part2\t" << part2 << endl;

    result = part1 | part2; /

    cout << "result\t"  << result << endl; 

    return 0;
}
