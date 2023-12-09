#include "rust-like-types/vec.h"
#include "rust-like-types/str.h"
#include "rust-like-types/memory.h"

#include <iostream>

int main() {
    using namespace grishind;

    Vec<int> my_vec{1, 2, 3};


    Box<int> box = std::make_unique<int>(666);
    Shared<int> shar = std::make_shared<int>(333);

    int sum = 0;
    for (int num : my_vec) {
        sum += num;
    }

    Str str{"It did compile, lol"};
    std::cout << str << '\n';

    sum += *shar + *box;
    std::cout << sum << '\n';

    return 0;
}
