// Don't Call Virtual (Polymorphic) Functions From Constructors & Destructors

#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base constructor called" << std::endl;
    }
    virtual ~Base(){
        std::cout << "Base destructor called" << std::endl;
    }
    virtual void setup()
    {
        std::cout << "Base::setup() called" << std::endl;
        m_value = 10;
    }
    virtual void clean_up(){
        std::cout << "Base::clean_up() called" << std::endl;
    }
    int get_value()
    {
        return m_value;
    }
protected:
    int m_value;
};

class Derived : public Base
{
public:
    Derived()
        : Base()
    {
        std::cout << "Derived constructor called" << std::endl;
    }
    virtual ~Derived(){
        std::cout << "Derived destructor called" << std::endl;
    }

    virtual void setup() override
    {
        std::cout << "Derived::setup() called" << std::endl;
        m_value = 100;
    }
    virtual void clean_up() override{
        std::cout << "Derived::clean_up() called" << std::endl;
    }
};

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main() {

    Base * p_base = new Derived;

    p_base->setup();

    auto value = p_base->get_value();
    std::cout << "value : " << value <<  std::endl; // 100

    p_base->clean_up();

    delete p_base;

    return 0;

}