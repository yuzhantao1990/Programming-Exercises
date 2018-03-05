#include <iostream>
#include <thread>

class background_task {
    public:
        background_task() : number(0) {}
        background_task(int input) : number(input) {}
        
        void operator()() const {
            for (int i = 0; i < 5; ++i) {
                std::cout << "background_task" << number << " : " << i << std::endl;
            }
        }
    private:
        int number;
};

int main() {
    background_task a(1);
    background_task b(2);

    std::thread t1(a);
    t1.join();
    
    std::thread t2(b);
    t2.join();
    
    return 0;
}
