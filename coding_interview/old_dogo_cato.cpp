#include <iostream>
#include <queue>

using namespace std;

class Animal
{
private:
    int id;
    int order;

public:
    // return order
    int get_order()
    {
        return order;
    }
    // set order
    void set_order(int _order)
    {
        order = _order;
    }
    // setting id
    void set_id(int _id)
    {
        id = _id;
    }
    // returning id
    int get_id()
    {
        return id;
    }
};

// For dogo
class Dog : public Animal
{
public:
    // constructor
    Dog()
    {
        set_id(1);
    }
};

// For Cato
class Cat : public Animal
{
public:
    // constructor
    Cat()
    {
        set_id(2);
    }
};

class A_queue
{
private:
    int timestamp;
    queue<Dog *> dq;
    queue<Cat *> cq;

public:
    // constructor
    A_queue()
    {
        timestamp = 0;
    }
    // input cato or dogo
    void enqueue(Animal *animal)
    {
        timestamp++;
        // timestamp is used for order setting
        animal->set_order(timestamp);

        // check for dogo
        if (animal->get_id() == 1)
            dq.push((Dog *)animal);

        // check for cato
        if (animal->get_id() == 2)
            cq.push((Cat *)animal);
    }

    // dogo gets adopted

    Dog *dequeueDog()
    {
        Dog *dog = NULL;
        if (not dq.empty())
        {
            dog = dq.front();
            dq.pop();
        }
        return dog;
    }

    // cato gets adopted

    Cat *dequeueCat()
    {
        Cat *cat = NULL;
        if (not cq.empty())
        {
            cat = cq.front();
            cq.pop();
        }
        return cat;
    }

    // Either dogo or cato get's adopted
    Animal *dequeueAny()
    {
        if (cq.empty() and dq.empty())
            return NULL;

        Animal *animal = NULL;
        if (cq.empty() != true and dq.empty() != true)
        {
            if (cq.front()->get_order() > dq.front()->get_order())
            {
                animal = cq.front();
                cq.pop();
            }
            else
            {
                animal = dq.front();
                dq.pop();
            }
        }
        if (cq.empty())
        {
            animal = dq.front();
            dq.pop();
        }
        else
        {
            animal = cq.front();
            cq.pop();
        }
        return animal;
    }
};

int main()
{
    A_queue aq;
    cout << "To drop a dog :1\nTo drop a cat :2 \nTo pick a dog :3\nTo pick a cat :4 \nTo pick oldest cato/dogo :5 \n To exit press any other key\n";
    int choice;
    cin >> choice;
    while (choice != 0)
    {
        if (choice == 1)
            aq.enqueue(new Dog());
        else if (choice == 2)
            aq.enqueue(new Cat());
        else if (choice == 3)
            aq.dequeueDog();
        else if (choice == 4)
            aq.dequeueCat();
        else if (choice == 5)
            aq.dequeueAny();
        else
            choice = 0;
    }
    return 0;
}