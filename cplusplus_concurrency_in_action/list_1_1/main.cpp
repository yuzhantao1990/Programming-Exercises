#include <iostream>
#include <thread>

using namespace std;

void hello() {
    std::cout << "Hello Concurrent World" << std::endl;
}

int main() {
    std::thread t(hello);
    t.join();
    return 0;
}
