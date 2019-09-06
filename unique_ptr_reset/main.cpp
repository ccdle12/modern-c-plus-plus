#include <iostream>

class Animal
{
    public:
        virtual ~Animal() {};
        virtual void eat() = 0;
};

class Dog : public Animal
{
    public:
        void eat() override
        {
            std::cout << "Dog is eating" << std::endl;
        }
};

class Cat : public Animal
{
    public:
        void eat() override
        {
            std::cout << "Cat is eating" << std::endl;
        }
};

int main(int argc, char* argv[])
{
    std::unique_ptr<Animal> some_animal;
    if ("dog" == std::string(argv[1]))
    {
        some_animal.reset(new Dog());
        some_animal->eat();
    } else {
        some_animal.reset(new Cat());
        some_animal->eat();
    }

    return 0;
}
