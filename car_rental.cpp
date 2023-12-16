#include <iostream>
#include <vector>
#include <string>

class Car {
private:
    std::string carId;
    std::string brand;
    std::string model;
    double basePricePerDay;
    bool isAvailable;

public:
    Car(std::string carId, std::string brand, std::string model, double basePricePerDay)
        : carId(carId), brand(brand), model(model), basePricePerDay(basePricePerDay), isAvailable(true) {}

    std::string getCarId() const { return carId; }
    std::string getBrand() const { return brand; }
    std::string getModel() const { return model; }

    double calculatePrice(int rentalDays) const {
        return basePricePerDay * rentalDays;
    }

    bool isAvailable() const {
        return isAvailable;
    }

    void rent() {
        isAvailable = false;
    }

    void returnCar() {
        isAvailable = true;
    }
};

class Customer {
private:
    std::string customerId;
    std::string name;

public:
    Customer(std::string customerId, std::string name)
        : customerId(customerId), name(name) {}

    std::string getCustomerId() const { return customerId; }
    std::string getName() const { return name; }
};

class Rental {
private:
    Car* car;
    Customer* customer;
    int days;

public:
    Rental(Car* car, Customer* customer, int days)
        : car(car), customer(customer), days(days) {}

    Car* getCar() const {
        return car;
    }

    Customer* getCustomer() const {
        return customer;
    }

    int getDays() const {
        return days;
    }
};

class CarRentalSystem {
private:
    std::vector<Car> cars;
    std::vector<Customer> customers;
    std::vector<Rental> rentals;

public:
    void addCar(const Car& car) {
        cars.push_back(car);
    }

    void addCustomer(const Customer& customer) {
        customers.push_back(customer);
    }

    void rentCar(Car& car, Customer& customer, int days) {
        if (car.isAvailable()) {
            car.rent();
            rentals.push_back(Rental(&car, &customer, days));
        } else {
            std::cout << "Car is not available for rent." << std::endl;
        }
    }

    void returnCar(Car& car) {
        car.returnCar();
        auto it = std::remove_if(rentals.begin(), rentals.end(),
            [&car](const Rental& rental) { return rental.getCar() == &car; });

        if (it != rentals.end()) {
            rentals.erase(it, rentals.end());
        } else {
            std::cout << "Car was not rented." << std::endl;
        }
    }

    void menu() {
        // Implementation of the menu function remains unchanged
        // ...

    }
};

int main() {
    CarRentalSystem rentalSystem;

    Car car1("C001", "Toyota", "Camry", 60.0);
    Car car2("C002", "Honda", "Accord", 70.0);
    Car car3("C003", "Mahindra", "Thar", 150.0);

    rentalSystem.addCar(car1);
    rentalSystem.addCar(car2);
    rentalSystem.addCar(car3);

    rentalSystem.menu();

    return 0;
}
