// Homework01.04.2024-Classes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Dog 
{
public:
    string name;
    string color;
    string bread;
    string favorite_food;
    double weight = 0;

    void Bark()
    {
        cout << bread << name << " : " <<  "GAV-GAV...\n";
    }
    void Growl()
    {
        cout << bread << name << " : " << "R-R-R-R-R-R...\n";
    }
    void Walk()
    {
        cout << " loves to walk in the park,";
    }
    void Eat()
    {
        cout << bread << name << " love eat " << favorite_food << ".\n";
    }
    void Sleep()
    {
        cout <<  bread << name << " went to sleep.\n";
    }
};

class PowerBank
{
public:
    string brand;
    string color;
    int quantity_ports = 0;
    double capacity = 0;
    bool Type_C = false;
    bool USB = false;
    bool Micro_USB = false;
    bool charg = false;

    void Charging()
    {
        if ((Type_C || Micro_USB) && !USB && charg)
        {
            cout << "Power bank charge the device.\n";
        }
        else if (USB)
        {
            cout << "Power bank charging.\n";
        }
    }
    void  PowerBankInfo()
    {
        cout << "Power Bank Info:\n";
        cout << "\t\tBrand: " << brand << "\n";
        cout << "\t\tColor: " << color << "\n";
        cout << "\t\tQuantity USB-ports: " << quantity_ports << "\n";
        cout << "\t\tCapacity: " << capacity << " mA/h\n";
        if (Type_C)
        {
            cout << "\t\tHave Type C-port \n";
        }
        if (Micro_USB)
        {
            cout << "\t\tHave Micro USB-port \n";
        }
    }
};

class Mouse
{
public:
    string brand;
    string model;
    string color;
    bool wireless = false;
    bool left_button = false;
    bool right_button = false;
    bool scrol = false;

    void Press_left_button()
    {
        if (left_button)
        {
            cout << "Perform an action.\n";
        }
        
    }
    void Press_right_button()
    {
        if (right_button)
        {
            cout << "Show context menu.\n";
        }
    }
    void Scrol()
    {
        if (scrol)
        {
            cout << "Scroll....scrol...scrol...scrol...\n";
        }
    }
    void MouseInfo()
    {
        cout << "Mouse Info:\n";
        cout << "\tBrand: " << brand << "\n";
        cout << "\tModel: " << model << "\n";
        cout << "\tColor: " << color << "\n";
        if (wireless)
        {
            cout << "\tWired or wireless:  wireless.\n";
        }
        else
        {
            cout << "\tWired or wireless:  wired.\n";
        }
    }
};

class TV
{
public:
    string brand;
    string model;
    double diagonal = 0;
    string color;

    void TVInfo() 
    {
        cout << "TV Info:\n";
        cout << "\tBrand: " << brand << "\n";
        cout << "\tModel: " << model << "\n";
        cout << "\tDiagonal: " << diagonal << " inches" << "\n";
        cout << "\tColor: " << color << "\n";
    }
    void TV_On() 
    {
        cout << "The TV turns on...\n";
    }

    void TV_Off() 
    {
        cout << "The TV turns off\n";
    }

    void changeChannel(int channel) 
    {
        cout << "Changing channel to " << channel << "\n";
    }

};

class Automobile
{
public: 
    string brand;
    string model;
    string equipment;
    string engine_type;
    double engine_volume = 0;
    string fuel;
    string transmision;
    double power = 0;
    int wheel_drive = 0;

    void CarInfo()
    {
        cout << "Car Information:\n";
        cout << "\t\tCar brand: " << brand << "\n";
        cout << "\t\tModel: " << model << "\n";
        cout << "\t\tCar equipment: " << equipment << "\n";
        cout << "\t\tEngine type: " << engine_type << "\n";
        cout << "\t\tEngine volume: " << engine_volume << " sm3\n";
        cout << "\t\tFuel: " << fuel << "\n";
        cout << "\t\tTransmision: " << transmision << "\n";
        cout << "\t\tEngine power: " << power << " hp\n";
        cout << "\t\tWheel drive: " << wheel_drive << " wheels\n";
    }

};

class Sosed
{
public:
    string name;
    string shoes;
    string tool;
    bool sleeping = false;
    string mental_condition;

    void Never_sleep()
    {
        cout << "A-HA-HA!!! NO, NO, NO\n";
    }
    void About_myself()
    {
        cout << "My name is " << name << ", i am a " << mental_condition << " And i have a " << tool << "\n";
    }
    void Work()
    {
        cout << "I'll put my on now " << shoes << " and take my " << tool << "\n";
        cout << "I urgently need to do something. NOW!\n";
    }
};

int main()
{
  //////////////////////////////////////////////////////////////////////////                  DOG                    ///////////////////////////////////////////////////////////////// 
    Dog dog;

    dog.name = "Benya";
    dog.favorite_food = "meat";
    dog.bread = "Pikines ";
    dog.weight = 6;
    dog.color = "beige";
    
    cout << dog.name << " color is " << dog.color << ".\n";
    dog.Bark();
    cout << dog.name << " ";
    dog.Walk(); 
    cout << " in any weather.\n";
    cout << dog.name << " was " << dog.weight << " kg.\n";
    dog.Eat();
    dog.weight++;
    cout << dog.name << " now " << dog.weight << " kg.\n";
    cout << "And ";
    dog.Sleep();
    cout << "\n\n\n";
    
    /////////////////////////////////////////////////

    dog.name = "Lordik";
    dog.favorite_food = "oladushki";
    dog.bread = "Pikines ";
    dog.weight = 5;
    dog.color = "ginger";
    
    cout << dog.name << " color is " << dog.color << ".\n";
    dog.Growl();
    cout << dog.name << " not much";
    dog.Walk();
    cout << " if it rains.\n";
    cout << dog.name << " was " << dog.weight << " kg.\n";
    dog.Eat();
    cout << dog.name << " now " << dog.weight << " kg.\n";
    cout << "And ";
    dog.Sleep();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////                  SOSED                    ///////////////////////////////////////////////////////////////
    cout << "\n\n\n";
    Sosed sosed;
    
    sosed.name = "Arkadiy";
    sosed.shoes = "Chugunnye Bashmaki";
    sosed.tool = "Perforator";
    sosed.sleeping = true;
    sosed.mental_condition = "CRAZYYY!";
    
    if (sosed.sleeping)
    {
        sosed.Never_sleep();
        sosed.About_myself();
        sosed.Work();
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////                  AUTOMOBILE                    //////////////////////////////////////////////////////////
    cout << "\n\n\n";
    Automobile car;

    car.brand = "Ford";
    car.model = "Fusion";
    car.equipment = "Titanium";
    car.engine_type = "DVS";
    car.engine_volume = 2000.01;
    car.fuel = "Gasoline";
    car.transmision = "Auto";
    car.power = 245;
    car.wheel_drive = 2;

    car.CarInfo();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////                      TV                        //////////////////////////////////////////////////////////
    cout << "\n\n\n";
    TV tv;
    
    tv.brand = "NoName";
    tv.model = "NoName3000";
    tv.diagonal = 48;
    tv.color = "Black";
    
    tv.TVInfo();
    cout << "\n";
    tv.TV_On();
    tv.changeChannel(1);
    tv.TV_Off();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////                      POWER BANK                        //////////////////////////////////////////////////////////
    cout << "\n\n\n";
    PowerBank PB;

    PB.brand = "Noname";
    PB.color = "Black";
    PB.quantity_ports = 4;
    PB.capacity = 20000;
    PB.Type_C = true;
    PB.USB = false;
    PB.Micro_USB = true;
    PB.charg = true;

    PB.Charging();
    cout << "\n";
    PB.PowerBankInfo();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////                      MOUSE                        //////////////////////////////////////////////////////////
    cout << "\n\n\n";
    Mouse mouse;

    mouse.brand = "NoName";
    mouse.model = "NoName8000ZX";
    mouse.color = "Black";
    mouse.wireless = true;
    mouse.left_button = false;
    mouse.right_button = true;
    mouse.scrol = true;

    mouse.Press_left_button();
    mouse.Press_right_button();
    mouse.Scrol();
    cout << "\n";
    mouse.MouseInfo();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
