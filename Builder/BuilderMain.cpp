#include <iostream>
using namespace std;

/* *
 * CAR class
 * Class that creates the structure that carries each product, in this case each cart.
 * */
class CAR{

        string _car;
        string _body;
        string _engine;

    public:

        CAR(string cartype): _car{cartype} {}
        void setEngine(string type) { _engine = type; }
        void setBody(string body)   { _body = body;   }
        string getEngine()          { return _engine; }
        string getBody()            { return _body;   }

        void show() {
            cout << "CAR Type: " << _car << endl
                 << "Body Type: " <<_body << endl
                 << "Engine Type: "<<_engine << endl << endl;
        }
};

/* *
 * CarBuilder class
 * Creates the structure to be followed by the builder.
 * */

class CarBuilder{
    protected:

        CAR *_car;

    public:

        /* *
         * Virtual method  is determined by the definition of a
         * function with the same header in one of its subclasses
         * */

        virtual void getPartsDone() = 0;
        virtual void buildBody() = 0;
        virtual void buildEngine() = 0;
        //virtual ~CarBuilder(){}
        CAR* getCAR(){ return _car; }
};

/* *
 * Director Class
 * Class in charge of maintaining the order of the builder.
 * */

class Director{

    CarBuilder *builder;

    public:

        CAR* assembleCar(CarBuilder *builder) {
            builder->getPartsDone();
            builder->buildBody();
            builder->buildEngine();
            return builder->getCAR();
        }
};

/* *
 * SedanCar class
 * Class used to exemplify the function of the builder
 * */

class SedanCar: public CarBuilder {

    public:

        void getPartsDone() { _car = new CAR("Maserati Ghibli"); }
        void buildEngine()  { _car->setEngine("V6 Turbo");   }
        void buildBody()    { _car->setBody("Ghibli Body");   }
        //~SedanCar(){delete _car;}
};

/* *
 * LuxuryCar class
 * Another class used to exemplify the function of the builder
 * */

class LuxuryCar: public CarBuilder {

    public:

        void getPartsDone() { _car = new CAR("Maserati Valene trofeo"); }
        void buildEngine()  { _car->setEngine("V8 Turbo");   }
        void buildBody()    { _car->setBody("Valene trofeo Body");   }
        //~SedanCar(){delete _car;}
};

//Principal function
    int main() {

        Director dir;
        SedanCar sedan;
        LuxuryCar lux;
        char option;

        cout << "Choose the Car Type\n";
        cout << "Sedan = 1\n";
        cout << "Luxury = 2\n";
        cout << "Enter an option:  ";
        cin >> option;

        CAR *sd = dir.assembleCar(&sedan);
        CAR *lx = dir.assembleCar(&lux);

       switch (option) {

            case '1':
                sd->show();
                break;

            case '2':
                lx->show();
                break;

            default:
                cout << "Error! The operator is not valid";
                break;
        }

        delete lx;
        delete sd;

        return 0;

}

