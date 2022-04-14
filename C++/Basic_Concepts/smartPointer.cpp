#include<iostream>
//inclduing smart pointer
#include<memory>

using namespace std;

class elmo{
public:
    elmo(){
        cout << "elmo created" << endl;
    }
    ~elmo(){
        cout << "elmo destroyed" << endl;
    }
};

int main(){
    unique_ptr<int> up1(new int(5)); // unique_ptr is a smart pointer
    unique_ptr<int> up2 = std::make_unique<int>(10); // make_unique is a factory function
    cout << *up1 << endl;
    cout << *up2 << endl;
    unique_ptr<elmo> up3(new elmo()); // elmo is created and referenced by up3
    {
        unique_ptr<elmo> up4(new elmo()); // another elmo is created and referenced by up4
        up3 = std::move(up4); // up3 now references the elmo referenced by up4 and the previous elmo is destroyed
        // elmo is destroyed because it is no longer referenced by any unique_ptr
    }// up4 is destroyed here
    
    return 0;
}