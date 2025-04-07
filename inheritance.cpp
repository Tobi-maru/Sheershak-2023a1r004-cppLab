// child class with multiple parents

#include <iostream>
using namespace std;
class parent1 {
    public : parent1 () {
        cout << "parent1 constructor" << endl;

    }

    ~ parent1 (){
        cout << "Parent1 destructor " << endl ;
    }
};

class parent2 {
    public : parent2 () {
        cout << "parent2 constructor" << endl;

    }

    ~ parent2 (){
        cout << "Parent2 destructor " << endl ;
    }
};


class child : public parent1 , public parent2 {
    // public : child (){
    //     cout << "child constructor " << endl;
    // }

    // ~child (){
    //     cout << "child destructor" << endl;
    // }


};

int main (){
    child obj;
    return 0;
}



// base class with multiple childs

# include <iostream>
using namespace std ;
class parent {
    public : void fun1(){
        cout << "parent class function ";

    }
};

class child : public parent {
    public : void fun2(){
        cout << "child class function2 " ;
    }

};

class child2 :public parent {
    public : void fun3 (){
        cout << "child class function 3";
    }
};

class child3 : public parent {
    public : void fun4 (){
        cout << "child class function 4";
    }
};

int main (){

    child obj;
    obj.fun1();
    obj.fun2();

    child2 obj1;
    obj1.fun1();
    obj1.fun3();

    return 0;
}