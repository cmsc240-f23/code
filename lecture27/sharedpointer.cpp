#include <iostream>
#include <memory>
using namespace std;

class Item 
{
public:
    Item() { cout << "Item constructed" << endl; }
    ~Item() { cout << "Item destroyed" << endl; }
};

void process(shared_ptr<Item>& sharedItem) 
{
    shared_ptr<Item> localShared = sharedItem;

    cout << "Reference count inside function = " << localShared.use_count() << endl;
}

int main() 
{
    shared_ptr<Item> myItem(new Item());

    cout << "Reference count in main, before function call = " << myItem.use_count() << endl;

    process(myItem);

    cout << "Reference count in main, after function call = " << myItem.use_count() << endl;

    return 0;
}
